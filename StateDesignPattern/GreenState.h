#ifndef GREENSTATE_H
#define GREENSTATE_H

#include "State.h"

class GreenState : public State {
public:
    void change(TrafficLight* light) override;
};

#endif
