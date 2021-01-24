#ifndef SIMULATION_
#define SIMULATION_

#include "Event.h"
#include "EventBuilder.h"
#include "LinkedQueue.h"
#include "PriorityQueue.h"
#include "Statistics.h"

class Simulation {
private:
   Event currentEvent;
   EventBuilder eventBuilder;
   LinkedQueue<Event> line1;
   LinkedQueue<Event> line2;
   LinkedQueue<Event> line3;
   PriorityQueue<Event> events;
   Statistics stats;
public:
   Simulation();
   virtual ~Simulation() = default;

   void simulate();
};

#include "Simulation.cpp"
#endif
