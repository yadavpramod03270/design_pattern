#include <iostream>
#include "developer.h"

using namespace std;

developer::developer(string n, int s)
    : name(n), salary(s) {
}

void developer::show_details() {
    cout << "Developer: " << name
        << ", Salary: " << salary << endl;
}

int developer::getsalary() {
    return salary;
}
