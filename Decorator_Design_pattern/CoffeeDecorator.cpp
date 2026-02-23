#include "CoffeeDecorator.h"

CoffeeDecorator::CoffeeDecorator(coffee* c)
    : wrappedCoffee(c) {
}

CoffeeDecorator::~CoffeeDecorator() {
    delete wrappedCoffee;
}
