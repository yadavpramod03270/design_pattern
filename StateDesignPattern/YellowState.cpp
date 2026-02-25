#include <iostream>
#include "YellowState.h"
#include "RedState.h"
#include "TrafficLight.h"

using namespace std;

void YellowState::change(TrafficLight* light) {
    cout << "Yellow -> Red" << endl;
    light->setState(new RedState());
}
