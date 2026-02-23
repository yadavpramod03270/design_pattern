#include <iostream>
#include "Bulb.h"

using namespace std;

Bulb::Bulb(Remote* r)
    : Device(r) {
}

void Bulb::controlling_Device() {
    cout << "Controlling the Bulb from LED_Remote" << endl;
    remote->control();
}
