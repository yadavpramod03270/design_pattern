#include "PizzaOrder.h"
#include "Chef.h"

PizzaOrder::PizzaOrder(Chef* c)
    : m_chef(c) {
}

void PizzaOrder::execute() {
    m_chef->cookPizza();
}
