#include "Director.h"

House* Director::createHouse(HouseBuilder* builder) {
    builder->buildWalls();
    builder->buildRoof();
    builder->buildDoor();
    return builder->getHouse();
}
