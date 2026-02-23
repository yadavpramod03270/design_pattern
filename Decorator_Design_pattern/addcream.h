#ifndef ADD_CREAM_H
#define ADD_CREAM_H

#include "CoffeeDecorator.h"

class addcream : public CoffeeDecorator {
public:
    addcream(coffee* c);
    std::string description() override;
    int cost() override;
};

#endif
