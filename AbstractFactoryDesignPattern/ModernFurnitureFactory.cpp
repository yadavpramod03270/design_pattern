#include "ModernFurnitureFactory.h"
#include "ModernChair.h"
#include "ModernSofa.h"

Chair* ModernFurnitureFactory::createChair() {
    return new ModernChair();
}

Sofa* ModernFurnitureFactory::createSofa() {
    return new ModernSofa();
}
