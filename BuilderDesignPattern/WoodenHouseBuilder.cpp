#include "WoodenHouseBuilder.h"

WoodenHouseBuilder::WoodenHouseBuilder() {
    house = new House();
}

void WoodenHouseBuilder::buildWalls() {
    house->walls = "Wooden Walls";
}

void WoodenHouseBuilder::buildRoof() {
    house->roof = "Wooden Roof";
}

void WoodenHouseBuilder::buildDoor() {
    house->door = "Wooden Door";
}

House* WoodenHouseBuilder::getHouse() {
    return house;
}

WoodenHouseBuilder::~WoodenHouseBuilder() {
    // Optional: Don't delete house here if ownership is transferred
}
