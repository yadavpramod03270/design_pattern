#ifndef CHAIR_H
#define CHAIR_H

class Chair {
public:
    virtual void sitOn() = 0;
    virtual ~Chair() = default;
};

#endif
