#include "OfficeManager.h"
#include "OfficeHR.h"
#include "OfficeDirector.h"

int main() {

    OfficeDirector director;
    OfficeHR hr;
    OfficeManager manager;

    // Chain: Manager → HR → Director
    manager.setNext(&hr);
    hr.setNext(&director);

    manager.handleRequest(1);   // Manager
    manager.handleRequest(4);   // HR
    manager.handleRequest(10);  // Director

    return 0;
}

