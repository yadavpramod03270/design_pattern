#ifndef OFFICEMANAGER_H
#define OFFICEMANAGER_H

#include "LeaveHandler.h"

class OfficeManager : public LeaveHandler {
public:
    void handleRequest(int days) override;
};

#endif
