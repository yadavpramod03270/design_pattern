#ifndef LED_REMOTE_H
#define LED_REMOTE_H

#include "Remote.h"

class LED_Remote : public Remote {
public:
    void control() override;
};

#endif
