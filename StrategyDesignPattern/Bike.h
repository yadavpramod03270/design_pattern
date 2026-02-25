#ifndef BIKE_H
#define BIKE_H

#include "WayToAirport.h"

class Bike : public WayToAirport {
public:
    void goToAirport(int amount) override;
};

#endif
