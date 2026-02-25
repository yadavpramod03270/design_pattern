#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <vector>
#include <string>
#include "Container.h"

class Playlist : public Container {
private:
    std::vector<std::string> songs;

public:
    Playlist(const std::vector<std::string>& s);

    std::vector<std::string>& getSongs();

    Iterator* createIterator() override;
};

#endif
