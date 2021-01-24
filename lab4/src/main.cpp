#include <iostream>
#include <cstdlib>

// Uncomment the line appropriate to the type of list you have
// decided to use (note that it makes no difference):
#include "ArrayList.h"
// #include "LinkedList.h"

#include "getPosition.h"

int main() {

   // Uncomment the corresponding list declaration below:
   ArrayList<int> list;
   // LinkedList<int> list;

   list.insert(1, 9);
   list.insert(2, 5);
   list.insert(1, 0);
   list.insert(2, 3);
   list.insert(4, 2);

   int position(0);
   int value(0);

   while (std::cin >> value) {

      if ((position = getPosition(list, value)) <= list.getLength() ) {
         std::cout << "list["
                   << position
                   << "] = "
                   << value
                   << "."
                   << std::endl;
      }
      else {
         std::cout << "The list does NOT contain "
                   << value
                   << "."
                   << std::endl;
      }
   }

   return EXIT_SUCCESS;
}
