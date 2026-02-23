#ifndef COFFEE_DECORATOR_H
#define COFFEE_DECORATOR_H

#include "coffee.h"

class CoffeeDecorator : public coffee {
protected:
    coffee* wrappedCoffee;

public:
    CoffeeDecorator(coffee* c);
    virtual ~CoffeeDecorator();
};

#endif
