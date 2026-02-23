#ifndef DEVELOPER_H
#define DEVELOPER_H

#include <string>
#include "Employee.h"

class developer : public Employee {
    std::string name;
    int salary;

public:
    developer(std::string n, int s);

    void show_details() override;
    int getsalary() override;
};

#endif
