#ifndef WAITER_H
#define WAITER_H

#include "Order.h"

class Waiter {
private:
    Order* m_order;

public:
    void takeOrder(Order* o);
    void placeOrder();
};

#endif
