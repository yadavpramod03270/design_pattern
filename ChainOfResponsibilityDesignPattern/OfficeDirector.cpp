#include <iostream>
#include "OfficeDirector.h"

using namespace std;

void OfficeDirector::handleRequest(int days) {
    if (days >= 5) {
        cout << "Director can approve the leave" << endl;
    }
    else if (next) {
        next->handleRequest(days);
    }
}
