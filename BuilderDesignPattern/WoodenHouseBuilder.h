#ifndef WOODENHOUSEBUILDER_H
#define WOODENHOUSEBUILDER_H

#include "HouseBuilder.h"

class WoodenHouseBuilder : public HouseBuilder {
private:
    House* house;

public:
    WoodenHouseBuilder();
    void buildWalls() override;
    void buildRoof() override;
    void buildDoor() override;
    House* getHouse() override;
    ~WoodenHouseBuilder();
};

#endif
