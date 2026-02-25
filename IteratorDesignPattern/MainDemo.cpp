#include <iostream>
#include <vector>
#include "Playlist.h"

using namespace std;

int main() {

    vector<string> songs = {
        "Shape of You",
        "Blinding Lights",
        "Believer",
        "Perfect"
    };

    Playlist myPlaylist(songs);

    Iterator* it = myPlaylist.createIterator();

    cout << "Playing Playlist:\n";

    while (it->hasNext()) {
        cout << it->next() << endl;
    }

    delete it;  // clean up

    return 0;
}

