#ifndef CONTAINER_H
#define CONTAINER_H

#include "Iterator.h"

class Container {
public:
    virtual Iterator* createIterator() = 0;
    virtual ~Container() = default;
};

#endif
