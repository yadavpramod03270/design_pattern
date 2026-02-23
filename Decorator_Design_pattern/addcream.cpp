#include "addcream.h"

addcream::addcream(coffee* c)
    : CoffeeDecorator(c) {
}

std::string addcream::description() {
    return wrappedCoffee->description() + " + Cream";
}

int addcream::cost() {
    return wrappedCoffee->cost() + 30;
}
