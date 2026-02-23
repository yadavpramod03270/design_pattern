#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
public:
    virtual void show_details() = 0;
    virtual int getsalary() = 0;
    virtual ~Employee() = default;
};

#endif
