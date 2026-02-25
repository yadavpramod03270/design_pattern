#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "HouseBuilder.h"

class Director {
public:
    House* createHouse(HouseBuilder* builder);
};

#endif
