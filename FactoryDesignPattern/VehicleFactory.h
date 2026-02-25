#ifndef VEHICLEFACTORY_H
#define VEHICLEFACTORY_H

#include <string>
#include "Vehicle.h"

class VehicleFactory {
public:
    static Vehicle* createVehicle(const std::string& type);
};

#endif
