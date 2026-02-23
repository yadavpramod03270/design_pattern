#include <iostream>
#include "Department.h"
#include "developer.h"

using namespace std;

int main() {

    Department* company = new Department("Tech Company");

    Department* devdpt = new Department("Development");
    devdpt->add(new developer("Pramod", 150000));
    devdpt->add(new developer("Alice", 50000));
    devdpt->add(new developer("Bob", 60000));
    company->add(devdpt);

    Department* HR = new Department("HR");
    HR->add(new developer("Ram", 50000));
    HR->add(new developer("Bob", 60000));
    company->add(HR);

    Department* operation = new Department("Operation");
    operation->add(new developer("Arvind", 150000));
    operation->add(new developer("David", 510000));
    operation->add(new developer("Caprio", 600));
    company->add(operation);

    company->show_details();
    cout << "Total Salary: "
        << company->getsalary() << endl;

    delete company;  // This now deletes everything recursively

    return 0;
}

