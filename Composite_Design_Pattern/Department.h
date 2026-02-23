#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>
#include <vector>
#include "Employee.h"

class Department : public Employee {
    std::string deptname;
    std::vector<Employee*> members;

public:
    Department(std::string name);

    void add(Employee* emp);
    void show_details() override;
    int getsalary() override;

    ~Department();   // Important for memory cleanup
};

#endif
