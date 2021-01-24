#include "LinkedStack.h"
#include "LinkedQueue.h"

bool isPalindrome(const std::string& str)
{
   LinkedStack<char> stack;
   LinkedQueue<char> queue;
   bool isPalindrome(true);
   for(char c: str)
   {
      stack.push(c);
      queue.enqueue(c);
   }
   while(!stack.isEmpty()&&!queue.isEmpty())
   {
      if(queue.peekFront()!=stack.peek())
         isPalindrome=false;
      stack.pop();
      queue.dequeue();
   }
   return isPalindrome;
}
