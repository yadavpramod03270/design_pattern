#include <iostream>
#include "House.h"

using namespace std;

void House::show() const {
    cout << walls << ", " << roof << ", " << door << endl;
}
