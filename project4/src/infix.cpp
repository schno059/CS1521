#include <iostream>//remove after testing
Infix::Infix()
{
   expression="";
}
Infix::~Infix()
{
   expression="";
   while(!operatorStack.isEmpty())
      operatorStack.pop();
   while(!valueStack.isEmpty())
      valueStack.pop();
}
bool Infix::setExpression(std::string anExpression)
{
   expression=anExpression;
   return true;
}
std::string Infix::getExpression()
{
   return expression;
}
int Infix::solveExpression()
{
   //problem within here
   for(char c:expression)
   {
      switch(c)
      {
          case '0':isADigit(0);break;
          case '1':isADigit(1);break;
          case '2':isADigit(2);break;
          case '3':isADigit(3);break;
          case '4':isADigit(4);break;
          case '5':isADigit(5);break;
          case '6':isADigit(6);break;
          case '7':isADigit(7);break;
          case '8':isADigit(8);break;
          case '9':isADigit(9);break;
          case '(':isLeftParenth();break;
          case ')':isRightParenth();break;
          case '+':isOperator('+');break;
          case '-':isOperator('-');break;
          case '*':isOperator('*');break;
          case '/':isOperator('/');break;
      }
   }
   while(!operatorStack.isEmpty())
      performOperation();
   //ending here
   int returnNum(-999);
   if(!valueStack.isEmpty())
      returnNum=valueStack.peek();
   return returnNum;
}
void Infix::isADigit(int a)
{
   valueStack.push(a);
}
void Infix::isLeftParenth()
{
   operatorStack.push('(');
}
void Infix::isRightParenth()
{
   if(!operatorStack.isEmpty())
   {
      while(!operatorStack.isEmpty()&&operatorStack.peek()!='(')
      {
         performOperation();
      }
      operatorStack.pop();
   }
}
void Infix::isOperator(char a)
{
   if(operatorStack.isEmpty()||precedence(a,operatorStack.peek())>0)
   {
      operatorStack.push(a);
   }
   else
   {
      while(!operatorStack.isEmpty()&&precedence(a,operatorStack.peek())<=0)
         performOperation();
      operatorStack.push(a);
   }
}
int Infix::precedence(char a, char b)
{
   int prec(0);
   if((a=='*'||a=='/')&&(b=='+'||b=='-'))
      prec=1;
   else if((a=='+'||a=='-')&&(b=='*'||b=='/'))
      prec=-1;
   else if((a=='(')&&(b=='+'||b=='-'||b=='*'||b=='/'))
      prec=-1;
   else if((b=='(')&&(a=='+'||a=='-'||a=='*'||a=='/'))
      prec=1;
   return prec;
}
void Infix::performOperation()
{
   if(!operatorStack.isEmpty()&&operatorStack.peek()!='('&&operatorStack.peek()!=')')
   {
      int rhs(0),lhs(0);
      if(!valueStack.isEmpty())
      {
         lhs=valueStack.peek();
         valueStack.pop();
      }
      if(!valueStack.isEmpty())
      {
         rhs=valueStack.peek();
         valueStack.pop();
      }
      int result(-666);
      char oper(operatorStack.peek());
      operatorStack.pop();
      switch(oper)
      {
          case '+':result=lhs+rhs;break;
          case '-':result=rhs-lhs;break;
          case '/':
             if(lhs==0)
                throw DivideByZeroExcep("Infinite result - Cannot handle division-by-zero.");
             else
                result=rhs/lhs;
             break;
          case '*':result=lhs*rhs;break;
      }
      valueStack.push(result);
   }
   else
      operatorStack.pop();
}
