EventBuilder::EventBuilder()
{
   std::string filename("");
   do{
      std::cout<<"\nInput filename : ";
      std::cin>>filename;
      inputFile.open(filename.c_str());
   }while(!inputFile);
   std::cout<<"\n\nSimulation of 1 Queue Begins\n";
}
Event EventBuilder::createArrivalEvent(int innumber,int linenumber)
{
   Event myEvent;
   myEvent.setNumber(innumber);
   int time(0);
   int dur(0);
   if(inputFile>>time&&inputFile>>dur)
   {
      myEvent.setType(ARRIVAL);
      myEvent.setLine(linenumber);
      myEvent.setTime(time);
      myEvent.setDuration(dur);
   }
   return myEvent;
}
Event EventBuilder::createDepartureEvent(const Time& curEventTime, const Time& transLength, int innumber, int linenumber)
{
   Event myEvent;
   myEvent.setType(DEPARTURE);
   myEvent.setNumber(innumber);
   Time total=curEventTime+transLength;
   myEvent.setTime(total);
   myEvent.setLine(linenumber);
   return myEvent;
}
