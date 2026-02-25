#ifndef YOUTUBECHANNEL_H
#define YOUTUBECHANNEL_H

#include <vector>
#include <string>
#include "Subscriber.h"

class YoutubeChannel {
private:
    std::vector<Subscriber*> subscribers;

public:
    void subscribe(Subscriber* s);
    void unsubscribe(Subscriber* s);
    void uploadVideo(const std::string& videoName);

private:
    void notifyAll(const std::string& videoName);
};

#endif
