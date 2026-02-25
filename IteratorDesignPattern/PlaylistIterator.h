#ifndef PLAYLISTITERATOR_H
#define PLAYLISTITERATOR_H

#include "Iterator.h"

class Playlist;  // Forward declaration

class PlaylistIterator : public Iterator {
private:
    Playlist* playlist;
    int index;

public:
    PlaylistIterator(Playlist* p);

    bool hasNext() override;
    std::string next() override;
};

#endif
