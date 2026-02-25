#include <iostream>
#include "VehicleFactory.h"

using namespace std;

int main() {
    Vehicle* v = VehicleFactory::createVehicle("car");

    if (v != nullptr) {
        v->drive();
        delete v;  // Important to avoid memory leak
    }

    return 0;
}

