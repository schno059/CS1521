DiscList::DiscList()
{
   discListPtr=std::make_shared<LinkedList<std::shared_ptr<Disc>>>();
}
DiscList::~DiscList()
{
   std::cout<<"\nDiscList destructor has been called";
}
bool DiscList::isEmpty() const
{
   return discListPtr->isEmpty();
}
int DiscList::getNumberOfDiscs() const
{
   return discListPtr->getLength();
}
bool DiscList::insertDisc(std::shared_ptr<Disc> discPtr)
{
   return discListPtr->insert(1,discPtr);
}
bool DiscList::removeDisc(std::shared_ptr<Disc> discPtr)
{
   return discListPtr->remove(findDiscPosition(discPtr));
}
std::shared_ptr<Disc> DiscList::retrieveDisc(int number)
{
   return discListPtr->getEntry(number);
}
int DiscList::findDiscPosition(std::shared_ptr<Disc> discPtr)
{
   int listLength=getNumberOfDiscs();
   int index(0);
   int i(1);
   while(i<=listLength&&discPtr!=retrieveDisc(i))
      i++;
   if(discPtr==retrieveDisc(i))
      index=i;
   return index;
}
