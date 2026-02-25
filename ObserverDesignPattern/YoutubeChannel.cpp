#include <iostream>
#include <algorithm>
#include "YoutubeChannel.h"

using namespace std;

void YoutubeChannel::subscribe(Subscriber* s) {
    subscribers.push_back(s);
}

void YoutubeChannel::unsubscribe(Subscriber* s) {
    subscribers.erase(
        remove(subscribers.begin(), subscribers.end(), s),
        subscribers.end()
    );
}

void YoutubeChannel::uploadVideo(const string& videoName) {
    cout << "Channel uploaded: " << videoName << endl;
    notifyAll(videoName);
}

void YoutubeChannel::notifyAll(const string& videoName) {
    for (auto s : subscribers) {
        s->notify(videoName);
    }
}
