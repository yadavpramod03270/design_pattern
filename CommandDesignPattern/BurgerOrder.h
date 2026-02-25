#ifndef BURGERORDER_H
#define BURGERORDER_H

#include "Order.h"

class Chef;  // Forward declaration

class BurgerOrder : public Order {
private:
    Chef* m_chef;

public:
    BurgerOrder(Chef* c);
    void execute() override;
};

#endif
