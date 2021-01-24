#include <iostream>
#include <memory>
#include <string>
#include "LinkedList.h"
#include "Track.h"
#include "Disc.h"
#include "DiscList.h"
#include "Track.cpp"
#include "Disc.cpp"
#include "DiscList.cpp"

int main()
{
   DiscList myDiscList;
   std::cout<<"\nWelcome to the disc library\nType in the letter for whichever operation you wish to perform";
   std::string response("");
   int index(-1);
   while(response!="q"&&response!="Q")
   {
      std::cout<<"\n(A)dd a new disc"
               <<"\n(R)emove a disc"
               <<"\n(P)rint a disc"
               <<"\n(L)ist discs"
               <<"\n(Q)uit\n";
      std::cin>>response;
      if(response=="A"||response=="a")//add new disc
      {
         myDiscList.insertDisc((new Disc)->getDiscFromUser());
      }
      else if(response=="R"||response=="r")//remove disc
      {
         int listSize=myDiscList.getNumberOfDiscs();
         std::cout<<"\nDisc Titles:\n";
         for(int i(1); i<=listSize; ++i)
         {
            std::cout<<"\n["<<i<<"]: "<<myDiscList.retrieveDisc(i)->getTitle();
         }
         std::cout<<"\nType a disc number to remove it from the list : ";
         std::cin>>index;
         if(index>=1&&index<=listSize)
            myDiscList.removeDisc(myDiscList.retrieveDisc(index));
         else
            std::cout<<"\n--Invalid Entry--\n";
      }
      else if(response=="P"||response=="p")//print disc
      {
         int listSize=myDiscList.getNumberOfDiscs();
         std::cout<<"\nDisc Titles:\n";
         for(int i(1); i<=listSize; ++i)
         {
            std::cout<<"\n["<<i<<"]: "<<myDiscList.retrieveDisc(i)->getTitle();
         }
         std::cout<<"\nType a disc number for more information : ";
         std::cin>>index;
         if(index>=1&&index<=listSize)
         {
            myDiscList.retrieveDisc(index)->printDisc();
            for(int i(1); i<=myDiscList.retrieveDisc(index)->getNumberOfTracks(); ++i)
            {
               myDiscList.retrieveDisc(index)->retrieveTrackByNumber(i)->printTrack();
            }
         }
         else
            std::cout<<"\n--Invalid Entry--\n";
      }
      else if(response=="L"||response=="l")//list discs
      {
         int listSize=myDiscList.getNumberOfDiscs();
         for(int i(1); i<=listSize; ++i)
         {
            myDiscList.retrieveDisc(i)->printDisc();
         }
      }
      else if(response!="Q"&&response!="q")//invalid
      {
         std::cout<<"\n--Invalid Command--\n";
      }
   }
}
