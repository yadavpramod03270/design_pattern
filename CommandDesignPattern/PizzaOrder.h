#ifndef PIZZAORDER_H
#define PIZZAORDER_H

#include "Order.h"

class Chef;  // Forward declaration

class PizzaOrder : public Order {
private:
    Chef* m_chef;

public:
    PizzaOrder(Chef* c);
    void execute() override;
};

#endif
