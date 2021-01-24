#include <sstream>
class Disc;

class Track
{
  private:
   std::string name;
   std::string artist;
   int playTime;
   int number;
   std::string location;
   std::weak_ptr<Disc> discPtr;
   int readPlayTime(std::string colonNumber);
   std::string minSecFormat(int seconds);
  public:
   Track()=delete;
   Track(std::weak_ptr<Disc> inDiscPtr);
   ~Track();
   void printTrack();
   bool isLessThan(Track aTrack) const;
   int getNumber() const;
   int getPlayTime() const;
   std::shared_ptr<Track> getTrackFromUser();
};
