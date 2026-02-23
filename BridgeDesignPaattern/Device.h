#ifndef DEVICE_H
#define DEVICE_H

#include "Remote.h"

class Device {
protected:
    Remote* remote;

public:
    Device(Remote* r) : remote(r) {}   // define here
    virtual void controlling_Device() = 0;
    virtual ~Device() = default;
};

#endif
