#ifndef STATE_H
#define STATE_H

class TrafficLight;  // Forward declaration

class State {
public:
    virtual void change(TrafficLight* light) = 0;
    virtual ~State() = default;
};

#endif
