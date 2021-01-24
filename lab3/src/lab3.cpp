#include "ArraySet.h"
#include <iostream>
using namespace std;

ArraySet<int> firstSet, secondSet, thirdSet;
std::vector<int> displayVector;

void duples();
void bothEmpty();
void leftEmpty();
void rightEmpty();
void noInter();
void haveInter();
void ident();

void allDisplay();

int main()
{
   cout<<"\nTesting attributes of ArraySet of type <int>\n";
   cout<<"----Response to duplicate entries----\n";
   duples();
   cout<<"\n\n----Difference of two empty sets----\n";
   bothEmpty();
   cout<<"\n\n----Difference when only the left set is empty----";
   leftEmpty();
   cout<<"\n\n----Difference when only the right set is empty----";
   rightEmpty();
   cout<<"\n\n----Difference when there is no intersection----";
   noInter();
   cout<<"\n\n----Difference when there is an intersection between non-identical sets----\n";
   haveInter();
   cout<<"\n\n----Difference when both sets are identical----\n";
   ident();
}
void duples()
{
   cout<<"\nNote: 0 means false or unsuccessful. 1 means true";
   for(int i(0); i<4; i++)
      cout<<"\nfirstSet.add("<<i<<")\t returns "<<firstSet.add(i);
   for(int i(1); i<13; i+=2)
      cout<<"\nfirstSet.add("<<i<<")\t returns "<<firstSet.add(i);
   displayVector=firstSet.toVector();
   cout<<"\n\nResult\n";
   for(int i(0); i<firstSet.getCurrentSize(); ++i)
      cout<<"\n["<<i<<"]: "<<displayVector[i];
}
void bothEmpty()
{
   firstSet.clear();
   secondSet.clear();
   allDisplay();
}
void leftEmpty()
{
   firstSet.clear();
   secondSet.clear();
   for(int i(0); i<6; ++i)
      secondSet.add(i);
   allDisplay();
}
void rightEmpty()
{
   firstSet.clear();
   secondSet.clear();
   for(int i(0); i<6; ++i)
      firstSet.add(i);
   allDisplay();
}
void noInter()
{
   firstSet.clear();
   secondSet.clear();
   for(int i(0); i<6; ++i)
      firstSet.add(i);
   for(int i(0); i<6; ++i)
      secondSet.add(i+50);
   allDisplay();
}
void haveInter()
{
   firstSet.clear();
   secondSet.clear();
   for(int i(0); i<6; ++i)
      firstSet.add(i);
   for(int i(0); i<6; ++i)
      secondSet.add(i+3);
   allDisplay();
}
void ident()
{
   firstSet.clear();
   secondSet.clear();
   for(int i(0); i<6; ++i)
      firstSet.add(i);
   for(int i(0); i<6; ++i)
      secondSet.add(i);
   allDisplay();
}
void allDisplay()
{
   cout<<"\nContents of first set:\n\n";
   displayVector=firstSet.toVector();
   for(int i(0); i<firstSet.getCurrentSize(); ++i)
      cout<<"\n["<<i<<"]: "<<displayVector[i];
   cout<<"\nContents of second set:\n\n";
   displayVector=secondSet.toVector();
   for(int i(0); i<secondSet.getCurrentSize(); ++i)
      cout<<"\n["<<i<<"]: "<<displayVector[i];
   thirdSet=thirdSet.difference(firstSet,secondSet);
   cout<<"\nContents of difference:\n\n";
   displayVector=thirdSet.toVector();
   for(int i(0); i<thirdSet.getCurrentSize(); ++i)
      cout<<"\n["<<i<<"]: "<<displayVector[i];
}
