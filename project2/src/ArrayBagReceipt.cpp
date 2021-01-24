/** @file
 *
 *  @course CS1521
 *  @section 1
 *  @term Spring 2019
 *
 *  Implementation file for the class ArrayBag.
 *
 *  Adapted from pages 101-111 in Carrano 7e.
 *
 *  @author Frank M. Carrano
 *  @author Timothy Henry
 *  @author Steve Holtz
 *  @modified by Jacob Schnoor
 *
 *  @date 05 Feb 2019
 *
 *  @version 7.0 */

#include <vector>

template <typename ItemType>
int ArrayBagReceipt<ItemType>::getCurrentSize() const {
   int returnCount(0);
   for(int i=0; i<maxItems; ++i)//fix later
      if(inUse[i])
         ++returnCount;
   return returnCount;
}

template <typename ItemType>
bool ArrayBagReceipt<ItemType>::isEmpty() const {

   return !getCurrentSize(); // itemCount == 0;
}

template <typename ItemType>
int ArrayBagReceipt<ItemType>::add(const ItemType& newEntry) {
   bool hasRoomToAdd(itemCount < maxItems);
   bool placed(false);
   int index(0);
   if(!hasRoomToAdd)
   {
      ItemType* oldArray(items);
      bool* oldUse(inUse);
      items=new ItemType[2*maxItems];
      inUse=new bool[2*maxItems];
      for(int i(0); i<maxItems; ++i)
      {
         items[i]=oldArray[i];
         inUse[i]=oldUse[i];
      }
      for(int i(maxItems); i<2*maxItems; ++i)
      {
         inUse[i]=false;
      }
      delete [] oldArray;
      delete [] oldUse;
      maxItems=2*maxItems;
   }
   while(!placed && index<maxItems)
   {
      if(!inUse[index])
      {
         inUse[index]=true;
         items[index]=newEntry;
         placed=true;
         ++itemCount;
      }
      ++index;
   }
   return index-1;
   //return hasRoomToAdd;
/**
   int i=0;
   bool placed=false;
   while(!placed)
   {
   if(!inUse[i])
   {
   inUse[i]=true;
   items[i]=newEntry;
   placed=true;
   if(i>maxItems-2)
   {
   inUse[maxItems]=false;//possibly faulty
   ++maxItems;
   }
   }
   ++i;
   }
   //inUse[maxItems]=false;
   //++maxItems;
   return i-1;
*/
}

template <typename ItemType>
ItemType ArrayBagReceipt<ItemType>::remove(const int& anIndex) {
/**
 //int locatedIndex(getIndexOf(anEntry) );
 int locatedIndex=anIndex;
 bool canRemoveItem(!isEmpty() && locatedIndex > -1 && inUse[locatedIndex]==true);

 if (canRemoveItem) {//change this later
 --itemCount;
 //items[locatedIndex] = items[itemCount];
 inUse[locatedIndex]=false;
 }

 return items[locatedIndex];
*/
   if(inUse[anIndex])
      inUse[anIndex]=false;
   return items[anIndex];
}

template <typename ItemType>
void ArrayBagReceipt<ItemType>::clear() {
   itemCount=0;
   for(int i=0; i<maxItems; i++)
   {
      inUse[i]=false;
   }
}

template <typename ItemType>
bool ArrayBagReceipt<ItemType>::contains(const ItemType& anEntry) const {

   bool isFound(false);
   int curIndex(0);

   while (!isFound && curIndex < itemCount) {
      isFound = anEntry == items[curIndex];
      ++curIndex; // Does not matter if extra increment occurs
   }

   return isFound;
}

template <typename ItemType>
int ArrayBagReceipt<ItemType>::getFrequencyOf(const ItemType& anEntry) const {

   int frequency(0);
   int curIndex(0);

   while (curIndex < itemCount) {
      if (items[curIndex] == anEntry) {
         ++frequency;
      }
      ++curIndex;
   }

   return frequency;
}

template <typename ItemType>
std::vector<ItemType> ArrayBagReceipt<ItemType>::toVector() const {

   std::vector<ItemType> bagContents;

   for (int i(0); i < maxItems; ++i) {
      if(inUse[i])
         bagContents.push_back(items[i]);
   }

   return bagContents;
}

template <typename ItemType>
int ArrayBagReceipt<ItemType>::getIndexOf(const ItemType& target) const {

   bool isFound(false);
   int targetIndex(-1);
   int searchIndex(0);

   while (!isFound && searchIndex < getCurrentSize()) {
      isFound = items[searchIndex] == target;

      if (isFound) {
         targetIndex = searchIndex;
      }
      ++searchIndex; // Does not matter if extra increment occurs
   }

   return targetIndex;
}
