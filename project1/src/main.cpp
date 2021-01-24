/** @file
 *
 *@author Jacob R Schnoor
 *
 *@note farewell*/

#include <iostream>
#include "stat.h"
using namespace std;

Stat myStat;

void displayStats();

int main()
{
   double temp;
   cout<<"\nWelcome to the statistical analysis program"<<endl;
   cout<<"Enter as many numbers as you would like"<<endl;
   cout<<"And view the statistical information of the sequence"<<endl;
   cout<<"Enter a number (-999 to clear)"<<endl;
   cin>>temp;
   while(temp!=-999)
   {
      while(temp!=-999)
      {
         myStat.add(temp);
         displayStats();
         cout<<"Enter another number (or -999)"<<endl;
         cin>>temp;
      }
      myStat.clear();
      displayStats();
      cout<<"Enter '-999' again to quit"<<endl;
      cout<<"Any other number to continue"<<endl;
      cin>>temp;
   }
   cout<<"Thank you for using our service"<<endl<<endl;
}
void displayStats()
{
   cout<<"\nNumbers Entered so Far: "<<myStat.getNumVals()<<endl;
   cout<<"Last Number Entered: "<<myStat.getLast()<<endl;
   cout<<"Sum of All Numbers: "<<myStat.getSum()<<endl;
   cout<<"Statistical mean: "<<myStat.getMean()<<endl;
   cout<<"Largest Number: "<<myStat.getMax()<<"\t\tSmallest Number: "<<myStat.getMin()<<endl<<endl;
}
