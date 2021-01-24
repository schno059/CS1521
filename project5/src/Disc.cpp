Disc::Disc()
{
   trackListPtr=std::make_shared<LinkedList<std::shared_ptr<Track>>>();
}
Disc::~Disc()
{
   std::cout<<"\nDestructor has been called on disc '"<<title<<"'";
}
bool Disc::isEmpty() const
{
   return trackListPtr->isEmpty();
}
int Disc::getNumberOfTracks() const
{
   return trackListPtr->getLength();
}
bool Disc::insertTrack(std::shared_ptr<Track> trackPtr)
{
   return trackListPtr->insert(1,trackPtr);
}
std::shared_ptr<Track> Disc::retrieveTrackByNumber(int trackNumber) const
{
   return trackListPtr->getEntry(trackNumber);
}
std::string Disc::getArtist() const
{
   return artist;
}
std::string Disc::getTitle() const
{
   return title;
}
bool Disc::isMultiArtist() const
{
   return multiArtist;
}
void Disc::printDisc()
{
   if(multiArtist)
   {
      std::cout<<"\n-"<<title<<"-"
               <<"\n"<<year
               <<"\n"<<genre
               <<"\n"<<totalPlayTime<<" seconds"
               <<"\n"<<getNumberOfTracks()<<" track(s)";
   }
   else
   {
      std::cout<<"\n-"<<title<<"- by "<<getArtist()
               <<"\n"<<year
               <<"\n"<<genre
               <<"\n"<<totalPlayTime<<" seconds"
               <<"\n"<<getNumberOfTracks()<<" track(s)";
   }
   std::cout<<"\n";
}
void Disc::addToTotalPlayTime(int time)
{
   totalPlayTime+=time;
}
bool Disc::isLessThan(Disc aDisc) const
{
   return title<aDisc.getTitle();
}
bool Disc::isLessThanOrEqualTo(Disc aDisc) const
{
   return title<=aDisc.getTitle();
}
std::shared_ptr<Disc> Disc::getDiscFromUser()
{
   std::string yesNo("");
   multiArtist=false;
   std::cout<<"\nEnter Title : ";
   std::cin>>title;
   std::cout<<"\nIs the disc multi-artist? (y/n) : ";
   std::cin>>yesNo;
   if(yesNo=="y"||yesNo=="Y")
      multiArtist=true;
   if(!multiArtist)
   {
      std::cout<<"\nEnter the artist name : ";
      std::cin>>artist;
   }
   std::cout<<"\nEnter the year : ";
   std::cin>>year;
   std::cout<<"\nEnter the genre : ";
   std::cin>>genre;
   auto returnDisc=std::shared_ptr<Disc>(this);
   do{
      returnDisc->insertTrack((new Track(returnDisc))->getTrackFromUser());
      std::cout<<"\nEnter another track (y/n)? : ";
      std::cin>>yesNo;
   }while(yesNo=="y"||yesNo=="Y");
   return returnDisc;
}
std::string Disc::minSecFormat(int seconds)
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
