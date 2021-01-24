Event::Event()
{
   type=NONE;
   time=0;
   duration=0;
   number=-1;
   line=-1;
}
Event::~Event()
{
}
bool Event::setType(const EventType& intype)
{
   return (type=intype);
}
bool Event::setTime(const Time& intime)
{
   return (time=intime);
}
bool Event::setDuration(const Time& intime)
{
   return (duration=intime);
}
bool Event::setNumber(int innum)
{
   return (number=innum);
}
bool Event::setLine(int linenumber)
{
   return (line=linenumber);
}
EventType Event::getType() const
{
   return type;
}
Time Event::getTime() const
{
   return time;
}
int Event::getNumber() const
{
   return number;
}
int Event::getDuration() const
{
   return duration;
}
int Event::getLine() const
{
   return line;
}
bool Event::operator<(const Event& rhs) const
{
   return time>rhs.time;
}
bool Event::operator>(const Event& rhs) const
{
   return time<rhs.time;
}
bool Event::operator<=(const Event& rhs) const
{
   return time>=rhs.time;
}
bool Event::operator>=(const Event& rhs) const
{
   return time<=rhs.time;
}
bool Event::operator==(const Event& rhs) const
{
   return time==rhs.time;
}
bool Event::operator!=(const Event& rhs) const
{
   return time!=rhs.time;
}
