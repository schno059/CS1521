#include "lab2functions.h"
#include <iostream>
using namespace std;

int main()//Testing the functions for lab2functions.cpp
{
   cout<<"\nTESTING WRITELINE FUNCTION\n";
   cout<<"\nThe letter 'A' printed 5 times\n";
   writeLine('A',5);
   cout<<"\nThe letter 'B' printed 4 times\n";
   writeLine('B',4);
   cout<<"\nThe letter 'C' printed 3 times\n";
   writeLine('C',3);
   cout<<"\nThe letter 'D' printed 2 times\n";
   writeLine('D',2);
   cout<<"\nThe letter 'E' printed 1 time\n";
   writeLine('E',1);
   cout<<"\nThe letter 'F' printed 0 times\n";
   writeLine('F',0);
   cout<<"\nThe letter 'G' printed -1 times\n";
   writeLine('G',-1);
   cout<<"\nThe letter 'H' printed -2 times\n";
   writeLine('H',-2);
   cout<<"\nThe letter 'I' printed 7 times\n";
   writeLine('I',7);
   cout<<"\n10 stars\n";
   writeLine('*',10);
   cout<<"\n5 questions\n";
   writeLine('?',5);
   cout<<"\n3 roots of all evil\n";
   writeLine('$',3);
   cout<<"\n1 world made equal\n";
   writeLine('=',1);
   cout<<"\n\n";
   cout<<"\nTESTING WRITEBLOCK FUNCTION\n";
   cout<<"\nThe letter 'A' with -3 lines with length of -3\n";
   writeBlock('A',-3,-3);
   cout<<"The letter 'B' with -3 lines with length of 0\n";
   writeBlock('B',-3,0);
   cout<<"The letter 'C' with -3 lines with length of 1\n";
   writeBlock('C',-3,1);
   cout<<"The letter 'D' with -3 lines with length of 3\n";
   writeBlock('D',-3,3);
   cout<<"The letter 'E' with 0 lines with length of -3\n";
   writeBlock('E',0,-3);
   cout<<"The letter 'F' with 0 lines with length of 0\n";
   writeBlock('F',0,0);
   cout<<"The letter 'G' with 0 lines with length of 1\n";
   writeBlock('G',0,1);
   cout<<"The letter 'H' with 0 lines with length of 3\n";
   writeBlock('H',0,3);
   cout<<"The letter 'I' with 5 lines with length of -3\n";
   writeBlock('I',5,-3);
   cout<<"The letter 'J' with 4 lines with length of 0\n";
   writeBlock('J',4,0);
   cout<<"The letter 'Q' with 3 lines with length of 1\n";
   writeBlock('Q',3,1);
   cout<<"The letter 'L' with 2 lines with length of 3\n";
   writeBlock('L',2,3);
   cout<<"The letter 'M' with 7 lines with length of 5\n";
   writeBlock('M',7,5);
   cout<<"The letter 'N' with 3 lines with length of 4\n";
   writeBlock('N',3,4);
}
