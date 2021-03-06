/** @file
 *
 *@author Jacob R Schnoor
 *
 *@note necromancy may be legal in Cyrodil but few will openly admit
 *to practicing it ever since the Mage's Guild banned it*/

#include <iostream>
#include "stat.h"
using namespace std;

Stat::Stat()
{
   clear();
}
bool Stat::add(double input)
{
   lastNum=input;
   N++;
   sum+=input;
   mean=sum/N;
   if(N<=1)
   {
      min=input;
      max=input;
   }
   else
   {
      if(input<min)
         min=input;
      else if(input>max)
         max=input;
   }
}
int Stat::getNumVals()
{
   return N;
}
double Stat::getLast()
{
   return lastNum;
}
double Stat::getSum()
{
   return sum;
}
double Stat::getMean()
{
   return mean;
}
double Stat::getMin()
{
   return min;
}
double Stat::getMax()
{
   return max;
}
void Stat::clear()
{
   N=0;
   lastNum=0;
   sum=0;
   mean=0;
   min=0;
   max=0;
}
