#include <iostream>
#include <string>

char cipher(char input);

int main()
{
   std::string message("sdfsdfs");
   while(message!="")
   {
      std::cout<<"\n\nEnter a message (typing nothing will terminate program)\n";
      std::getline(std::cin,message);
      if(message!=""){
         std::cout<<"\nYour Message : "<<message;
         std::cout<<"\nRotation yields : ";
         for(char& c : message)
            std::cout<<cipher(c);
      }
      else
         std::cout<<"\nGoodbye\n";
   }
}
char cipher(char input)
{
   char returnChar=' ';
   if((int)input>=48&&(int)input<=57)
      returnChar=(char)((((int)input-3)%10)+48);
   else if((int)input>=65&&(int)input<=90)
      returnChar=(char)((((int)input)%26)+65);
   else if((int)input>=97&&(int)input<=122)
      returnChar=(char)((((int)input-6)%26)+97);
   else
      returnChar=input;
   return returnChar;
}
