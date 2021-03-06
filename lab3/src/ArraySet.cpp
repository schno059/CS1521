/** @file
 *
 *  @course CS1521
 *  @section 1
 *  @term Spring 2019
 *
 *  Implementation file for the recursive class ArraySet.
 *
 *  Adapted from pages 112-114 in Carrano 7e.
 *
 *  @author Frank M. Carrano
 *  @author Timothy Henry
 *  @author Steve Holtz
 *  @modified by Jacob Schnoor
 *
 *  @date 22 Feb 2019
 *
 *  @version 7.0 */

#include <vector>

template <typename ItemType>
int ArraySet<ItemType>::getCurrentSize() const {

   return itemCount;
}

template <typename ItemType>
bool ArraySet<ItemType>::isEmpty() const {

   return !itemCount;
}

template <typename ItemType>
bool ArraySet<ItemType>::add(const ItemType& newEntry) {

   bool hasRoomToAdd(itemCount < maxItems);
   for(int i(0); i<itemCount; ++i)
      if(items[i]==newEntry)
         hasRoomToAdd=false;

   if (hasRoomToAdd) {
      items[itemCount] = newEntry;
      ++itemCount;
   }

   return hasRoomToAdd;
}

template <typename ItemType>
bool ArraySet<ItemType>::remove(const ItemType& anEntry) {

   int locatedIndex(getIndexOf(anEntry, 0) );
   bool canRemoveItem(!isEmpty() && locatedIndex > -1);

   if (canRemoveItem) {
      --itemCount;
      items[locatedIndex] = items[itemCount];
   }

   return canRemoveItem;
}

template <typename ItemType>
void ArraySet<ItemType>::clear() {

   itemCount = 0;
}

template <typename ItemType>
bool ArraySet<ItemType>::contains(const ItemType& anEntry) const {

   bool isFound(false);
   int curIndex(0);

   while (!isFound && curIndex < itemCount) {
      isFound = anEntry == items[curIndex];
      ++curIndex;
   }

   return isFound;
}

template <typename ItemType>
int ArraySet<ItemType>::getFrequencyOf(const ItemType& anEntry) const {

   return countFrequency(anEntry, 0);
}

template <typename ItemType>
std::vector<ItemType> ArraySet<ItemType>::toVector() const {

   std::vector<ItemType> setContents;

   for (int i(0); i < itemCount; ++i) {
      setContents.push_back(items[i]);
   }

   return setContents;
}

template <typename ItemType>
int ArraySet<ItemType>::getIndexOf(const ItemType& target, int searchIndex) const {
   int targetIndex(-1);

   if (searchIndex < itemCount) {
      if (items[searchIndex] == target) {
         targetIndex = searchIndex;
      }
      else {
         targetIndex = getIndexOf(target, searchIndex + 1);
      }
   }

   return targetIndex;
}

template <typename ItemType>
int ArraySet<ItemType>::countFrequency(const ItemType& target, int searchIndex) const {
   int frequency(0);

   if (searchIndex < itemCount) {
      if (items[searchIndex] == target) {
         frequency = 1 + countFrequency(target, searchIndex + 1);
      }
      else {
         frequency = countFrequency(target, searchIndex + 1);
      }
   }

   return frequency;
}

template <typename ItemType>
ArraySet<ItemType> ArraySet<ItemType>::difference(const ArraySet<ItemType>& set1, const ArraySet<ItemType>& set2) const{
   ArraySet<ItemType> returnSet=set1;
   std::vector<ItemType> removeVect=set2.toVector();
   for(int i(0); i<set2.getCurrentSize(); ++i)
      returnSet.remove(removeVect[i]);
   return returnSet;
}
