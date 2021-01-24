Simulation::Simulation()
{
}
void Simulation::simulate()
{
   int i(1);
   Time totalTime(0);
   auto eventToAdd (eventBuilder.createArrivalEvent(i));
   while(eventToAdd.getType()!=NONE)
   {
      if(eventToAdd.getType()==ARRIVAL)
      {
         line.enqueue(eventToAdd);
         ++i;
         eventToAdd=(eventBuilder.createArrivalEvent(i));
      }
   }
   while(!line.isEmpty())
   {
      eventToAdd=line.peekFront();
      if(totalTime<eventToAdd.getTime())
         totalTime=eventToAdd.getTime()+eventToAdd.getDuration();
      else
         totalTime+=eventToAdd.getDuration();
      events.enqueue(eventToAdd);
      events.enqueue(eventBuilder.createDepartureEvent(eventToAdd.getTime(),totalTime-eventToAdd.getTime(),eventToAdd.getNumber()));
      line.dequeue();
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
