int getPosition(const ArrayList<int>& list, int element){
   int returnPosition(9999);
   for(int i(1); i<list.getLength(); ++i)
      if(list.getEntry(i)==element)
         returnPosition=i;
   return returnPosition;
}
