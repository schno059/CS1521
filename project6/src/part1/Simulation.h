#ifndef SIMULATION_
#define SIMULATION_

#include "Time.h"
#include "EventType.h"
#include "Event.h"
#include "EventBuilder.h"
#include "LinkedQueue.h"
#include "PriorityQueue.h"
#include "Statistics.h"

class Simulation {
private:
   Event currentEvent;
   EventBuilder eventBuilder;
   LinkedQueue<Event> line;
   PriorityQueue<Event> events;
   Statistics stats;
public:
   Simulation();
   virtual ~Simulation() = default;
   void simulate();
};

#include "Simulation.cpp"

#endif
