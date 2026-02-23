#include <iostream>
#include "simple_coffee.h"
#include "addmilk.h"
#include "addsuger.h"
//#include "addcream.h"

using namespace std;

int main() {

    coffee* myCoffee = new simple_coffee();
    myCoffee = new addmilk(myCoffee);
    myCoffee = new addsuger(myCoffee);
    // myCoffee = new addcream(myCoffee);

    cout << myCoffee->description() << endl;
    cout << "Total Cost: " << myCoffee->cost() << endl;

    delete myCoffee;
    return 0;
}

