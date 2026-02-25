#ifndef VICTORIANFURNITUREFACTORY_H
#define VICTORIANFURNITUREFACTORY_H

#include "FurnitureFactory.h"

class VictorianFurnitureFactory : public FurnitureFactory {
public:
    Chair* createChair() override;
    Sofa* createSofa() override;
};

#endif
