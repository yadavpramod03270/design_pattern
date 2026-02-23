#include "addmilk.h"

addmilk::addmilk(coffee* c)
    : CoffeeDecorator(c) {
}

std::string addmilk::description() {
    return wrappedCoffee->description() + " + Milk";
}

int addmilk::cost() {
    return wrappedCoffee->cost() + 20;
}
