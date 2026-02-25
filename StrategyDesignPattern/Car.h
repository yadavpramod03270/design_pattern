#ifndef CARSTRATEGY_H
#define CARSTRATEGY_H

#include "WayToAirport.h"

class Car : public WayToAirport {
public:
    void goToAirport(int amount) override;
};

#endif
