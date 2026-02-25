#ifndef LEAVEHANDLER_H
#define LEAVEHANDLER_H

class LeaveHandler {
protected:
    LeaveHandler* next;

public:
    LeaveHandler() : next(nullptr) {}
    
    virtual void handleRequest(int days) = 0;
    virtual ~LeaveHandler() = default;
   

    void setNext(LeaveHandler* n) {
        next = n;
    }
};

#endif
