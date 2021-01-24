Track::Track(std::weak_ptr<Disc> inDiscPtr)
{
   discPtr=inDiscPtr;
}
Track::~Track()
{
   std::cout<<"\nDestructor called on Track '"<<name<<"'";
}
void Track::printTrack()
{
   if(discPtr.lock()->isMultiArtist())
   {
      std::cout<<"\n'"<<name<<"' by "<<artist
               <<"\n"<<getPlayTime()<<" seconds"
               <<"\n"<<location
               <<"\n";
   }
   else
   {
      std::cout<<"\n'"<<name<<"'"
               <<"\n"<<getPlayTime()<<" seconds"
               <<"\n"<<location
               <<"\n";
   }
}
bool Track::isLessThan(Track aTrack) const
{
   return number<aTrack.getNumber();
}
int Track::getNumber() const
{
   return number;
}
int Track::getPlayTime() const
{
   return playTime;
}
std::shared_ptr<Track> Track::getTrackFromUser()
{
   if(discPtr.lock()->isMultiArtist())
   {
      std::cout<<"\nEnter Track Name : ";
      std::cin>>name;
      std::cout<<"\nEnter Artist Name : ";
      std::cin>>artist;
      std::cout<<"\nEnter Play Time (in seconds) : ";
      std::cin>>playTime;
      std::cout<<"\nEnter File Location : ";
      std::cin>>location;
   }
   else
   {
      std::cout<<"\nEnter Track Name : ";
      std::cin>>name;
      std::cout<<"\nEnter Play Time (in seconds) : ";
      std::cin>>playTime;
      std::cout<<"\nEnter File Location : ";
      std::cin>>location;
   }
   discPtr.lock()->addToTotalPlayTime(playTime);
   return std::shared_ptr<Track>(this);
}
int Track::readPlayTime(std::string colonNumber)
{
   int returnNumber(0);
   std::string str2(colonNumber.substr(colonNumber.find(":")+1));
   std::string str1(colonNumber.substr(0,colonNumber.find(":")));
   int x,y;
   std::stringstream converter(str1);
   std::stringstream converter2(str2);
   converter>>x;
   converter2>>y;
   x*=60;
   returnNumber+=x+y;
   return returnNumber;
}
std::string Track::minSecFormat(int seconds)
{
   std::string returnString("");
   int min(0);
   int sec(0);
   if(seconds<=59)
   {
      returnString=""+seconds;
   }
   else
   {
      min=seconds/60;
      sec=seconds%60;
      returnString=min+":"+sec;
   }
   return returnString;
}
