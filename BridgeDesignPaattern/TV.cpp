#include <iostream>
#include "TV.h"

using namespace std;

TV::TV(Remote* r)
    : Device(r) {
}

void TV::controlling_Device() {
    cout << "Controlling the TV from TV_Remote" << endl;
    remote->control();
}
