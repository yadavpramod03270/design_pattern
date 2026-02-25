#ifndef MODERNFURNITUREFACTORY_H
#define MODERNFURNITUREFACTORY_H

#include "FurnitureFactory.h"

class ModernFurnitureFactory : public FurnitureFactory {
public:
    Chair* createChair() override;
    Sofa* createSofa() override;
};

#endif
