#ifndef REMOTE_H
#define REMOTE_H

class Remote {
public:
    virtual void control() = 0;
    virtual ~Remote() = default;
};

#endif
