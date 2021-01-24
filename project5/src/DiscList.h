class DiscList{
  private:
   std::shared_ptr<LinkedList<std::shared_ptr<Disc>>> discListPtr;
  public:
   DiscList();
   ~DiscList();
   bool isEmpty() const;
   int getNumberOfDiscs() const;
   bool insertDisc(std::shared_ptr<Disc> discPtr);
   bool removeDisc(std::shared_ptr<Disc> discPtr);
   std::shared_ptr<Disc> retrieveDisc(int number);
   int findDiscPosition(std::shared_ptr<Disc> discPtr);
};
