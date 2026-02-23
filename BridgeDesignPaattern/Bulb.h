#ifndef BULB_H
#define BULB_H

#include "Device.h"

class Bulb : public Device {
public:
    Bulb(Remote* r);
    void controlling_Device() override;
};

#endif
