#ifndef ORDER_H
#define ORDER_H

class Order {
public:
    virtual void execute() = 0;
    virtual ~Order() = default;
};

#endif
