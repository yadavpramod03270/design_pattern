#ifndef SIMPLE_COFFEE_H
#define SIMPLE_COFFEE_H

#include "coffee.h"

class simple_coffee : public coffee {
public:
    std::string description() override;
    int cost() override;
};

#endif
