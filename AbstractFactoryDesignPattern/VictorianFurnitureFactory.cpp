#include "VictorianFurnitureFactory.h"
#include "VictorianChair.h"
#include "VictorianSofa.h"

Chair* VictorianFurnitureFactory::createChair() {
    return new VictorianChair();
}

Sofa* VictorianFurnitureFactory::createSofa() {
    return new VictorianSofa();
}
