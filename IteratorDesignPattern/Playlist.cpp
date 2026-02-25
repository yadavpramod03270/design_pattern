#include "Playlist.h"
#include "PlaylistIterator.h"

Playlist::Playlist(const std::vector<std::string>& s)
    : songs(s) {
}

std::vector<std::string>& Playlist::getSongs() {
    return songs;
}

Iterator* Playlist::createIterator() {
    return new PlaylistIterator(this);
}
