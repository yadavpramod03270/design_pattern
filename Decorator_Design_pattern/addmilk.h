#ifndef ADD_MILK_H
#define ADD_MILK_H

#include "CoffeeDecorator.h"

class addmilk : public CoffeeDecorator {
public:
    addmilk(coffee* c);
    std::string description() override;
    int cost() override;
};

#endif
