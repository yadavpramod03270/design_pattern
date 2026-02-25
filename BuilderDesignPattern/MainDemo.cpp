#include <iostream>
#include "Director.h"
#include "WoodenHouseBuilder.h"

using namespace std;

int main() {

    Director director;
    HouseBuilder* builder = new WoodenHouseBuilder();

    House* house = director.createHouse(builder);
    house->show();

    delete house;
    delete builder;

    return 0;
}
