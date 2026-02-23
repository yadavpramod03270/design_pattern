#include "ChairFactory.h"

ChairType* ChairFactory::getChair(std::string design,
    std::string color,
    std::string material) {

    std::string key = design + color + material;

    if (chairs.find(key) == chairs.end()) {
        chairs[key] = new ChairType(design, color, material);
    }

    return chairs[key];
}

// Destructor to avoid memory leak
ChairFactory::~ChairFactory() {
    for (auto& pair : chairs) {
        delete pair.second;
    }
}
