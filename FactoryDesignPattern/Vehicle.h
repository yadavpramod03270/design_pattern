#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
public:
    virtual void drive() = 0;
    virtual ~Vehicle() = default;
};

#endif
