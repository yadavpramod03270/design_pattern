#include "Chef.h"
#include "BurgerOrder.h"
#include "PizzaOrder.h"
#include "Waiter.h"

int main() {

    Chef chef;

    BurgerOrder burger(&chef);
    PizzaOrder pizza(&chef);

    Waiter waiter;

    waiter.takeOrder(&burger);
    waiter.placeOrder();

    waiter.takeOrder(&pizza);
    waiter.placeOrder();

    return 0;
}
