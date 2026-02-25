#include <iostream>
#include "Waiter.h"

using namespace std;

void Waiter::takeOrder(Order* o) {
    m_order = o;
}

void Waiter::placeOrder() {
    cout << "Waiter sends the order to the kitchen!!" << endl;
    if (m_order) {
        m_order->execute();
    }
}
