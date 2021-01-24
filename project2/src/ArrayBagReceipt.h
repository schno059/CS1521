/** @file
 *
 *  @course CS1521
 *  @section 1
 *  @term Spring 2019
 *
 *  Header file for an array-based implementation of the ADT bag.
 *
 *  Adapted from page 100 in Carrano 7e.
 *
 *  @author Frank M. Carrano
 *  @author Timothy Henry
 *  @author Steve Holtz
 *  @modified by Jacob Schnoor
 *
 *  @date 01 Feb 2019
 *
 *  @version 7.0 */

#ifndef ARRAY_BAG_
#define ARRAY_BAG_

#include <vector>

#include "BagReceiptInterface.h"

/** @class ArrayBag ArrayBag.h "ArrayBag.h"
 *
 *  Specification of an array-based ADT bag. */
template <typename ItemType>
class ArrayBagReceipt : public BagReceiptInterface<ItemType> {
private:
   /** Maximum capacity of this bag. */
   static const int DEFAULT_CAPACITY = 6;

   /** Data storage. */
   ItemType* items=new ItemType[DEFAULT_CAPACITY];
   bool* inUse=new bool[DEFAULT_CAPACITY];

   /** Number of items in this bag. */
   int itemCount = 0;

   /** Maximum capacity of this bag. */
   int maxItems = DEFAULT_CAPACITY;

   /** Gets the index of target in the array 'items' in this bag.
    *
    * @param target The ItemType value to retrieve the index of.
    *
    * @return The index of the element in the array 'items' that
    *         contains 'target' or -1 if the array does not contain
    *         'target'. */
   int getIndexOf(const ItemType& target) const;

public:
   /** Default constructor. */
   ArrayBagReceipt() = default;

   /** Virtual destructor. */
   virtual ~ArrayBagReceipt() = default;

   virtual int getCurrentSize() const;

   virtual bool isEmpty() const;

   virtual int add(const ItemType& newEntry);

   virtual ItemType remove(const int& anIndex);

   virtual void clear();

   virtual int getFrequencyOf(const ItemType& anEntry) const;

   virtual bool contains(const ItemType& anEntry) const;

   virtual std::vector<ItemType> toVector() const;
};

#include "ArrayBagReceipt.cpp"

#endif

