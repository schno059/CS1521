#include <iostream>
#include "ArrayBagReceipt.h"
using namespace std;

void addInts();
void addStrings();
void showInts();
void showStrings();
void intStats();
void stringStats();
void intSanity();
void stringTheory();

ArrayBagReceipt<int> theBag;
ArrayBagReceipt<std::string> stringBag;

int main()
{
   cout<<"\nThe first test is an ArrayBagReceipt of type <int> named\n"
       <<"'theBag'\n"
       <<"We'll start by adding some values\n\n";
   addInts();
   cout<<"\n\nNow let's see what the bag looks like\n\n";
   showInts();
   intStats();
   cout<<"\nNow we'll get crazy\n";
   intSanity();
   cout<<"\n\nBehold the turmoil\n";
   showInts();
   intStats();
   cout<<"\nNow let's try an ArrayBagReceipt of type <std::string>\n";
   cout<<"named stringBag\n";
   addStrings();
   showStrings();
   stringStats();
   stringTheory();
   showStrings();
   stringStats();
   cout<<"\nAnd at the end of fear...(clearing the string bag)\n";
   stringBag.clear();
   showStrings();
   stringStats();
}
void addInts()
{
   cout<<"-----Adding to theBag-----\n";
   cout<<"theBag.add(996) should return 0; returns "<<theBag.add(996);
   cout<<"\ntheBag.add(887) should return 1; returns "<<theBag.add(887);
   cout<<"\ntheBag.add(776) should return 2; returns "<<theBag.add(776);
   cout<<"\ntheBag.add(2222) should return 3; returns "<<theBag.add(2222);
   cout<<"\ntheBag.add(7676) should return 4; returns "<<theBag.add(7676);
   cout<<"\ntheBag.add(-5) should return 5; returns "<<theBag.add(-5);
   cout<<"\ntheBag.add(7) should return 6; returns "<<theBag.add(7);
   cout<<"\ntheBag.add(66) should return 7; returns "<<theBag.add(66);
   cout<<"\ntheBag.add(89) should return 8; returns "<<theBag.add(89);
}
void showInts()
{
   cout<<"-----Contents of the bag-----\n";
   std::vector<int> bagVector=theBag.toVector();
   for(int i(0); i<theBag.getCurrentSize(); ++i)
      cout<<"At Location "<<i<<": "<<bagVector[i]<<"\n";
   //for(std::vector<int>::const_iterator i = theBag.toVector().begin();
   //i!=theBag.toVector().end(); ++i)cout<<*i<<"\n";
   //cout<<theBag.toVector()<<"\n";
}
void intStats()
{
   cout<<"\n-----Bag Statistics-----\n";
   cout<<"theBag.getCurrentSize()\t"<<theBag.getCurrentSize();
   cout<<"\ntheBag.isEmpty()\t"<<theBag.isEmpty()<<"\n";
}
void intSanity()
{
   cout<<"\n-----Craziness-----\n";
   cout<<"theBag.remove(0) should return 996; returns "<<theBag.remove(0);
   cout<<"\ntheBag.remove(2) should return 776; returns "<<theBag.remove(2);
   cout<<"\ntheBag.remove(5) should return -5; returns "<<theBag.remove(5);
   cout<<"\ntheBag.add(1) should return 0; returns "<<theBag.add(1);
   cout<<"\ntheBag.add(2) should return 2; returns "<<theBag.add(2);
   cout<<"\ntheBag.add(3) should return 5; returns "<<theBag.add(3);
   cout<<"\ntheBag.add(4) should return 9; returns "<<theBag.add(4);
   cout<<"\ntheBag.add(5) should return 10; returns "<<theBag.add(5);
   cout<<"\ntheBag.add(6) should return 11; returns "<<theBag.add(6);
   cout<<"\ntheBag.remove(5) should return 3; returns "<<theBag.remove(5);
   cout<<"\ntheBag.add(3333) should return 5; returns "<<theBag.add(3333);
}
void addStrings()
{
   cout<<"\n-----Adding Strings (Skullface Speech)-----\n";
   cout<<"\nstringBag.add('I was born') should return 0;";
   cout<<"\nreturns "<<stringBag.add("I was born");
   cout<<"\nstringBag.add('in a') should return 1;";
   cout<<"\nreturns "<<stringBag.add("in a");
   cout<<"\nstringBag.add('small village') should return 2;";
   cout<<"\nreturns "<<stringBag.add("small village");
   cout<<"\nstringBag.add('I was still') should return 3;";
   cout<<"\nreturns "<<stringBag.add("I was still");
   cout<<"\nstringBag.add('a child when') should return 4;";
   cout<<"\nreturns "<<stringBag.add("a child when");
   cout<<"\nstringBag.add('we were raided') should return 5;";
   cout<<"\nreturns "<<stringBag.add("we were raided");
   cout<<"\nstringBag.add('by soldiers') should return 6;";
   cout<<"\nreturns "<<stringBag.add("by soldiers");
}
void showStrings()
{
   cout<<"\n\n-----Contents of the string bag-----\n\n";
   std::vector<std::string> bagVector=stringBag.toVector();
   for(int i(0); i<stringBag.getCurrentSize(); ++i)
      cout<<"At Location "<<i<<": "<<bagVector[i]<<"\n";
   //for(std::vector<int>::const_iterator i = theBag.toVector().begin();
   //i!=theBag.toVector().end(); ++i)cout<<*i<<"\n";
   //cout<<theBag.toVector()<<"\n";
}
void stringStats()
{
   cout<<"\n-----String Bag Statistics-----\n";
   cout<<"stringBag.getCurrentSize()\t"<<stringBag.getCurrentSize();
   cout<<"\nstringBag.getFrequencyOf('I was born')\t"
       <<stringBag.getFrequencyOf("I was born");
   cout<<"\nstringBag.getFrequencyOf('words')\t"
       <<stringBag.getFrequencyOf("words");
   cout<<"\nstringBag.isEmpty()\t"<<stringBag.isEmpty()<<"\n";
}
void stringTheory()
{
   cout<<"\n-----String Craziness (Samsara)-----\n";
   cout<<"\nstringBag.add('words') should return 7;";
   cout<<"\nreturns "<<stringBag.add("words");
   cout<<"\nstringBag.add('like samsara') should return 8;";
   cout<<"\nreturns "<<stringBag.add("like samsara");
   cout<<"\nstringBag.add('mean death and rebirth') should return 9;";
   cout<<"\nreturns "<<stringBag.add("mean death and rebirth");
   cout<<"\nstringBag.remove(3) should return 'I was still';";
   cout<<"\nreturns "<<stringBag.remove(3);
   cout<<"\nstringBag.add('I was born') should return 3;";
   cout<<"\nreturns "<<stringBag.add("I was born");
}
