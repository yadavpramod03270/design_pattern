#include "VehicleFactory.h"
#include "Car.h"
#include "Bike.h"

Vehicle* VehicleFactory::createVehicle(const std::string& type) {
    if (type == "car") {
        return new Car();
    }
    if (type == "bike") {
        return new Bike();
    }
    return nullptr;
}
