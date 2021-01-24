Simulation::Simulation()
{
}
void Simulation::simulate()
{
   int i(1);
   Time totalTime1(0);
   Time totalTime2(0);
   Time totalTime3(0);
   auto eventToAdd (eventBuilder.createArrivalEvent(i,1));
   while(eventToAdd.getType()!=NONE)
   {
      if(eventToAdd.getType()==ARRIVAL)
      {
         if(eventToAdd.getLine()==1)
            line1.enqueue(eventToAdd);
         else if(eventToAdd.getLine()==2)
            line2.enqueue(eventToAdd);
         else if(eventToAdd.getLine()==3)
            line3.enqueue(eventToAdd);
         ++i;
         if(line1.getLength()<line2.getLength()&&line1.getLength()<=line3.getLength())
            eventToAdd=(eventBuilder.createArrivalEvent(i,1));
         else if(line2.getLength()<=line3.getLength())
            eventToAdd=(eventBuilder.createArrivalEvent(i,2));
         else
            eventToAdd=(eventBuilder.createArrivalEvent(i,3));
      }
   }
   while(!line1.isEmpty()||!line2.isEmpty()||!line3.isEmpty())
   {
      if(!line1.isEmpty())
      {
         eventToAdd=line1.peekFront();
         if(totalTime1<eventToAdd.getTime())
            totalTime1=eventToAdd.getTime()+eventToAdd.getDuration();
         else
            totalTime1+=eventToAdd.getDuration();
         events.enqueue(eventToAdd);
         events.enqueue(eventBuilder.createDepartureEvent(eventToAdd.getTime(),totalTime1-eventToAdd.getTime(),eventToAdd.getNumber(),1));
         line1.dequeue();
      }
      else if(!line2.isEmpty())
      {
         eventToAdd=line2.peekFront();
         if(totalTime2<eventToAdd.getTime())
            totalTime2=eventToAdd.getTime()+eventToAdd.getDuration();
         else
            totalTime2+=eventToAdd.getDuration();
         events.enqueue(eventToAdd);
         events.enqueue(eventBuilder.createDepartureEvent(eventToAdd.getTime(),totalTime2-eventToAdd.getTime(),eventToAdd.getNumber(),2));
         line2.dequeue();
      }
      else
      {
         eventToAdd=line3.peekFront();
         if(totalTime3<eventToAdd.getTime())
            totalTime3=eventToAdd.getTime()+eventToAdd.getDuration();
         else
            totalTime3+=eventToAdd.getDuration();
         events.enqueue(eventToAdd);
         events.enqueue(eventBuilder.createDepartureEvent(eventToAdd.getTime(),totalTime3-eventToAdd.getTime(),eventToAdd.getNumber(),3));
         line3.dequeue();
      }
   }
   auto curEvent=eventToAdd;
   while(!events.isEmpty())
   {
      curEvent=events.peekFront();
      stats.addEvent(curEvent);
      events.dequeue();
   }
   std::cout<<"\nSimulation Ends\n\n";
   stats.reportStats();
}
