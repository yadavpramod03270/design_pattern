#ifndef FURNITUREFACTORY_H
#define FURNITUREFACTORY_H

#include "Chair.h"
#include "Sofa.h"

class FurnitureFactory {
public:
    virtual Chair* createChair() = 0;
    virtual Sofa* createSofa() = 0;
    virtual ~FurnitureFactory() = default;
};

#endif
