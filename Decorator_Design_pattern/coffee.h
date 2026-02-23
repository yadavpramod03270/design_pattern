#ifndef COFFEE_H
#define COFFEE_H

#include <string>

class coffee {
public:
    virtual std::string description() = 0;
    virtual int cost() = 0;
    virtual ~coffee() = default;
};

#endif
