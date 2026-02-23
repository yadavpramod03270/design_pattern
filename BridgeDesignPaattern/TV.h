#ifndef TV_H
#define TV_H

#include "Device.h"

class TV : public Device {
public:
    TV(Remote* r);
    void controlling_Device() override;
};

#endif
