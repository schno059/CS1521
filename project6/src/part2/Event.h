#include "Time.h"
#include "EventType.h"

class Event
{
  private:
   EventType type;
   Time time;
   Time duration;
   int number;
   int line;
  public:
   Event();
   ~Event();
   bool setType(const EventType& intype);
   bool setTime(const Time& intime);
   bool setDuration(const Time& intime);
   bool setNumber(int innum);
   bool setLine(int linenumber);
   EventType getType() const;
   Time getTime() const;
   int getNumber() const;
   int getDuration() const;
   int getLine() const;
   bool operator<(const Event& rhs) const;
   bool operator>(const Event& rhs) const;
   bool operator<=(const Event& rhs) const;
   bool operator>=(const Event& rhs) const;
   bool operator==(const Event& rhs) const;
   bool operator!=(const Event& rhs) const;
};

#include "Event.cpp"
