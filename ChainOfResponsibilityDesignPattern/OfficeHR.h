#ifndef OFFICEHR_H
#define OFFICEHR_H

#include "LeaveHandler.h"

class OfficeHR : public LeaveHandler {
public:
    void handleRequest(int days) override;
};

#endif
