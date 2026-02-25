#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

#include "State.h"

class TrafficLight {
private:
    State* currentState;

public:
    TrafficLight(State* s);
    void setState(State* s);
    void requestChange();
    ~TrafficLight();
};

#endif
