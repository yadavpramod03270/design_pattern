#ifndef OFFICEDIRECTOR_H
#define OFFICEDIRECTOR_H

#include "LeaveHandler.h"

class OfficeDirector : public LeaveHandler {
public:
    void handleRequest(int days) override;
};

#endif
