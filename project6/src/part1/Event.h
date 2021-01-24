class Event
{
  private:
   EventType type;
   Time time;
   Time duration;
   int number;
  public:
   Event();
   ~Event();
   bool setType(const EventType& intype);
   bool setTime(const Time& intime);
   bool setDuration(const Time& intime);
   bool setNumber(int innum);
   EventType getType() const;
   Time getTime() const;
   int getNumber() const;
   int getDuration() const;
   bool operator<(const Event& rhs) const;
   bool operator>(const Event& rhs) const;
   bool operator<=(const Event& rhs) const;
   bool operator>=(const Event& rhs) const;
   bool operator==(const Event& rhs) const;
   bool operator!=(const Event& rhs) const;
};

#include "Event.cpp"
