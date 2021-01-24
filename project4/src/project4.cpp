#include "infix.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

Infix inf;

int main()
{
   std::string response("");
   std::string nextLine("");
   std::ifstream inFile;
   std::string filename;
   cout<<"\nWelcome to the infix calculator";
   do{
      cout<<"\nProvide the filename to read from : ";
      cin>>filename;
      inFile.open(filename.c_str());
      cout<<"\n";
      if(!inFile && filename!="quit")
         cout<<"File unable to open. Try again or type 'quit' to exit\n";
      else if(filename!="quit")
         cout<<"File opened\n";
   }while(!inFile && filename!="quit");
   if(filename!="quit")
   {
      while(getline(inFile,nextLine))
      {
         inf.setExpression(nextLine);
         cout<<inf.getExpression()<<endl;
         cout<<inf.getExpression()<<" = ";
         try
         {
            cout<<inf.solveExpression()<<endl;
         }
         catch(DivideByZeroExcep& d)
         {
            cerr<<d.what()<<endl;
         }
      }
   }
}
