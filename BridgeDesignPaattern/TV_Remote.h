#ifndef TV_REMOTE_H
#define TV_REMOTE_H

#include "Remote.h"

class TV_Remote : public Remote {
public:
    void control() override;
};

#endif
