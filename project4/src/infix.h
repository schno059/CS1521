#include "LinkedStack.h"
#include "DivideByZeroExcep.h"
#include <string>

class Infix
{
  private:
   std::string expression;
   LinkedStack<char> operatorStack;
   LinkedStack<int> valueStack;
   void isADigit(int a);
   void isLeftParenth();
   void isRightParenth();
   void isOperator(char a);
   void performOperation();
   int precedence(char a, char b);
  public:
   Infix();
   ~Infix();
   bool setExpression(std::string anExpression);
   std::string getExpression();
   int solveExpression();
};

#include "infix.cpp"
