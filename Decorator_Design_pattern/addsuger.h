#ifndef ADD_SUGAR_H
#define ADD_SUGAR_H

#include "CoffeeDecorator.h"

class addsuger : public CoffeeDecorator {
public:
    addsuger(coffee* c);
    std::string description() override;
    int cost() override;
};

#endif
