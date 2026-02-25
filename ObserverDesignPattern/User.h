#ifndef USER_H
#define USER_H

#include <string>
#include "Subscriber.h"

class User : public Subscriber {
private:
    std::string name;

public:
    User(const std::string& n);
    void notify(const std::string& videoName) override;
};

#endif
