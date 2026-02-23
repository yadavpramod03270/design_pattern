#ifndef CHAIRFACTORY_H
#define CHAIRFACTORY_H

#include <map>
#include <string>
#include "ChairType.h"

class ChairFactory {
private:
    std::map<std::string, ChairType*> chairs;

public:
    ChairType* getChair(std::string design,
        std::string color,
        std::string material);

    ~ChairFactory();   // important for memory cleanup
};

#endif
