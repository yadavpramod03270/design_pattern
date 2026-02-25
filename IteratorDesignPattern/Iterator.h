#ifndef ITERATOR_H
#define ITERATOR_H

#include <string>

class Iterator {
public:
    virtual bool hasNext() = 0;
    virtual std::string next() = 0;
    virtual ~Iterator() = default;
};

#endif
