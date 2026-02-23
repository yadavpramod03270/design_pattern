#include "addsuger.h"

addsuger::addsuger(coffee* c)
    : CoffeeDecorator(c) {
}

std::string addsuger::description() {
    return wrappedCoffee->description() + " + Sugar";
}

int addsuger::cost() {
    return wrappedCoffee->cost() + 10;
}
