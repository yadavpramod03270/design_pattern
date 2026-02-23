#include <iostream>
#include "Department.h"

using namespace std;

Department::Department(string name)
    : deptname(name) {
}

void Department::add(Employee* emp) {
    members.push_back(emp);
}

void Department::show_details() {
    cout << "Department: " << deptname << endl;

    for (auto emp : members) {
        emp->show_details();
    }

    cout << "======================================" << endl;
}

int Department::getsalary() {
    int Total = 0;

    for (auto emp : members) {
        Total += emp->getsalary();  // recursive behavior
    }

    return Total;
}

// 🔥 Important destructor (prevents memory leak)
Department::~Department() {
    for (auto emp : members) {
        delete emp;
    }
}
