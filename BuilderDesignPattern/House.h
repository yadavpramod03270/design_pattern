#ifndef HOUSE_H
#define HOUSE_H

#include <string>

class House {
public:
    std::string walls;
    std::string roof;
    std::string door;

    void show() const;
};

#endif
