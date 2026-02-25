#ifndef HOUSEBUILDER_H
#define HOUSEBUILDER_H

#include "House.h"

class HouseBuilder {
public:
    virtual void buildWalls() = 0;
    virtual void buildRoof() = 0;
    virtual void buildDoor() = 0;
    virtual House* getHouse() = 0;
    virtual ~HouseBuilder() = default;
};

#endif
