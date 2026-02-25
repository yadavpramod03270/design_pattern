#include "PlaylistIterator.h"
#include "Playlist.h"

PlaylistIterator::PlaylistIterator(Playlist* p)
    : playlist(p), index(0) {
}

bool PlaylistIterator::hasNext() {
    return index < playlist->getSongs().size();
}

std::string PlaylistIterator::next() {
    return playlist->getSongs()[index++];
}
