#include "lab2functions.h"
#include <iostream>
using namespace std;

void writeLine(char kaer, int amount)//writes [amount] number of
//[kaer]s to the screen
{
   if(amount>0)
   {
      cout<<kaer;
      writeLine(kaer,amount-1);
   }
}
//uses writeLine to create a block of [morn] characters that is
//[height] tall and [length] long
void writeBlock(char morn, int height, int length)
{
   if(height>0)
   {
      writeLine(morn,length);
      cout<<endl;
      writeBlock(morn, height-1, length);
   }
}
