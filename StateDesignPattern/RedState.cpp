#include <iostream>
#include "RedState.h"
#include "GreenState.h"
#include "TrafficLight.h"

using namespace std;

void RedState::change(TrafficLight* light) {
    cout << "Red -> Green" << endl;
    light->setState(new GreenState());
}
