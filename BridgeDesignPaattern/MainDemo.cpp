#include "TV_Remote.h"
#include "LED_Remote.h"
#include "TV.h"
#include "Bulb.h"

int main() {

    Remote* r1 = new TV_Remote();
    Device* d1 = new TV(r1);
    d1->controlling_Device();

    Remote* r2 = new LED_Remote();
    Device* d2 = new Bulb(r2);
    d2->controlling_Device();

    delete d1;
    delete r1;

    delete d2;
    delete r2;

    return 0;
}
