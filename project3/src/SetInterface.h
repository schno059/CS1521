/** @file
 *
 *  @course CS1521
 *  @section 1
 *  @term Spring 2019
 *
 *  BagInterface class template definition.
 *
 *  Adapted from page 24-25 in Carrano 7e.
 *
 *  @author Frank M. Carrano
 *  @author Timothy Henry
 *  @author Steve Holtz
 *
 *  @date 08 Feb 2019
 *
 *  @version 7.0 */

#ifndef SET_INTERFACE_
#define SET_INTERFACE_

#include <vector>

/** @class SetInterface SetInterface.h "SetInterface.h"
 *
 *  SetInterface abstract base class template. */
template <typename ItemType>
class SetInterface {
public:
   /** Virtual destructor. (See C++ Interlude 2.) */
   virtual ~SetInterface() {}

   /** Gets the current number of entries in this set.
    *
    *  @return The integer number of entries currently in the set. */
   virtual int getCurrentSize() const = 0;

   /** Sees whether this set is empty.
    *
    *  @return True if the set is empty, or false if not. */
   virtual bool isEmpty() const = 0;

   /** Adds a new entry to this set.
    *
    *  @post If successful, newEntry is stored in the set and the
    *        count of items in the set has increased by 1.
    *
    *  @param newEntry The object to be added as a new entry.
    *
    *  @return True if addition was successful, or false if not. */
   virtual bool add(const ItemType& newEntry) = 0;

   /** Removes one occurrence of a given entry from this set, if
    *  possible.
    *
    *  @post If successful, anEntry has been removed from the set and
    *        the count of items in the set has decreased by 1.
    *
    *  @param anEntry The value of the entry to be removed.
    *
    *  @return True if removal was successful, or false if not. */
   virtual bool remove(const ItemType& anEntry) = 0;

   /** Removes all entries from this set.
    *
    *  @post This set contains no items (thus the count is 0). */
   virtual void clear() = 0;


   /** Counts the number of times a given entry appears in set.
    *
    *  @param anEntry The value of the entry to be counted.
    *
    *  @return The number of times anEntry appears in this set. */
   virtual int getFrequencyOf(const ItemType& anEntry) const = 0;

   /** Tests whether this set contains a given entry.
    *
    *  @param anEntry The value of the entry to locate.
    *
    *  @return True if this set contains anEntry, or false
    *          otherwise. */
   virtual bool contains(const ItemType& anEntry) const = 0;

   /** Converts this set into a vector.
    *
    *  @return A vector containing all the entries in this set. */
   virtual std::vector<ItemType> toVector() const = 0;
};

#endif
