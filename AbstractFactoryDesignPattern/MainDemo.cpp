#include <iostream>
#include "ModernFurnitureFactory.h"
// #include "VictorianFurnitureFactory.h"

using namespace std;

int main() {

    FurnitureFactory* factory = new ModernFurnitureFactory();
    // FurnitureFactory* factory = new VictorianFurnitureFactory();

    Chair* chair = factory->createChair();
    Sofa* sofa = factory->createSofa();

    chair->sitOn();
    sofa->lieOn();

    delete chair;
    delete sofa;
    delete factory;

    return 0;
}

