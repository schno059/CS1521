class Disc
{
  private:
   std::string title;
   std::string artist;
   int year;
   std::string genre;
   int totalPlayTime;
   bool multiArtist;
   std::shared_ptr<LinkedList<std::shared_ptr<Track>>> trackListPtr;
  public:
   Disc();
   ~Disc();
   bool isEmpty() const;
   int getNumberOfTracks() const;
   bool insertTrack(std::shared_ptr<Track> trackPtr);
   std::shared_ptr<Track> retrieveTrackByNumber(int trackNumber) const;
   std::string getArtist() const;
   std::string getTitle() const;
   bool isMultiArtist() const;
   void printDisc();
   void addToTotalPlayTime(int time);
   bool isLessThan(Disc aDisc) const;
   bool isLessThanOrEqualTo(Disc aDisc) const;
   std::shared_ptr<Disc> getDiscFromUser();
   std::string minSecFormat(int seconds);
};
