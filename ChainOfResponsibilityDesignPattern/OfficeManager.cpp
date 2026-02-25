#include <iostream>
#include "OfficeManager.h"

using namespace std;

void OfficeManager::handleRequest(int days) {
    if (days <= 2) {
        cout << "Manager can approve the leave" << endl;
    }
    else if (next) {
        next->handleRequest(days);
    }
}
