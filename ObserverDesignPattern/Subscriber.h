#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include <string>

class Subscriber {
public:
    virtual void notify(const std::string& videoName) = 0;
    virtual ~Subscriber() = default;
};

#endif
