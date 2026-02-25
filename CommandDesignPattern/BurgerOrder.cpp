#include "BurgerOrder.h"
#include "Chef.h"

BurgerOrder::BurgerOrder(Chef* c)
    : m_chef(c) {
}

void BurgerOrder::execute() {
    m_chef->cookBurger();
}
