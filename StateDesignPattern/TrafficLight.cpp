#include "TrafficLight.h"

TrafficLight::TrafficLight(State* s)
    : currentState(s) {
}

void TrafficLight::setState(State* s) {
    delete currentState;        // clean old state
    currentState = s;
}

void TrafficLight::requestChange() {
    currentState->change(this);
}

TrafficLight::~TrafficLight() {
    delete currentState;
}
