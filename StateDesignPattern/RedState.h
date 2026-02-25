#ifndef REDSTATE_H
#define REDSTATE_H

#include "State.h"

class RedState : public State {
public:
    void change(TrafficLight* light) override;
};

#endif
