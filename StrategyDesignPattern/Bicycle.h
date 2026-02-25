#ifndef BICYCLE_H
#define BICYCLE_H

#include "WayToAirport.h"

class Bicycle : public WayToAirport {
public:
    void goToAirport(int amount) override;
};

#endif
