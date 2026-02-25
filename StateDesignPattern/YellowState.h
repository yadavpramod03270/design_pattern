#ifndef YELLOWSTATE_H
#define YELLOWSTATE_H

#include "State.h"

class YellowState : public State {
public:
    void change(TrafficLight* light) override;
};

#endif
