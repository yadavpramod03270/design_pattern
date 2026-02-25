#include <iostream>
#include "OfficeHR.h"

using namespace std;

void OfficeHR::handleRequest(int days) {
    if (days > 2 && days < 5) {
        cout << "HR can approve the leave" << endl;
    }
    else if (next) {
        next->handleRequest(days);
    }
}
