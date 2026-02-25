#ifndef CHOOSESTRATEGY_H
#define CHOOSESTRATEGY_H

#include "WayToAirport.h"

class ChooseStrategy {
private:
    WayToAirport* way;

public:
    ChooseStrategy(WayToAirport* w);
    void setStrategy(WayToAirport* w);
    void startJourney(int amount);
};

#endif
