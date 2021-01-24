/** @file
 *
 *  @course CS1521
 *  @section 1
 *  @term Spring 2019
 *
 *  Implementation file for a smart pointer-based implementation of the ADT
 *  stack.
 *
 *  Adapted from pages 246-248, 250 in Carrano 7e.
 *
 *  @author Frank M. Carrano
 *  @author Timothy Henry
 *  @author Steve Holtz
 *  @modified by Jacob Schnoor
 *
 *  @date 29 Mar 2019
 *
 *  @version 7.0 */

#include <new>
#include <string>

#include "PrecondViolatedExcep.h"

template <typename ItemType>
LinkedStack<ItemType>::LinkedStack(const LinkedStack<ItemType>& aStack) {

   if (!aStack.topPtr) {
      topPtr = nullptr;
   }
   else {
      NodePtr origStackPtr(std::make_shared<Node<ItemType>>(aStack.topPtr));

      try {
         topPtr=std::make_shared<Node<ItemType>>(origStackPtr->getItem() );

         NodePtr newChainPtr(std::make_shared<Node<ItemType>>(topPtr));

         origStackPtr = origStackPtr->getNext();

         while (origStackPtr) {
            newChainPtr->setNext(std::make_shared<Node<ItemType>>(origStackPtr->getItem()));

            newChainPtr = newChainPtr->getNext();
            origStackPtr = origStackPtr->getNext();
         }
      }
      catch (const std::bad_alloc&) {
         while (!isEmpty() ) {
            pop();
         }
         throw;
      }
   }
}

template <typename ItemType>
LinkedStack<ItemType>::~LinkedStack() {

   while (!isEmpty() ) {
      pop();
   }
}

template <typename ItemType>
bool LinkedStack<ItemType>::isEmpty() const {

   return !topPtr;
}

template <typename ItemType>
bool LinkedStack<ItemType>::push(const ItemType& newItem) {

   bool canPush(true);

   try {
      topPtr=std::make_shared<Node<ItemType>>(newItem, topPtr);
   }
   catch (const std::bad_alloc&) {
      canPush = false;
   }

   return canPush;
}

template <typename ItemType>
bool LinkedStack<ItemType>::pop() {

   bool canPop(!isEmpty() );

   if (canPop) {
      NodePtr nodeToDeletePtr(topPtr);

      topPtr = topPtr->getNext();
   }

   return canPop;
}

template <typename ItemType>
ItemType LinkedStack<ItemType>::peek() const {

   if (isEmpty() ) {
      std::string message("LinkedStack::peek() ");
      message += "called on an empty stack.";

      throw PrecondViolatedExcep(message);
   }

   return topPtr->getItem();
}
