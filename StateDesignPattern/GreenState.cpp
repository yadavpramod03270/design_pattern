#include <iostream>
#include "GreenState.h"
#include "YellowState.h"
#include "TrafficLight.h"

using namespace std;

void GreenState::change(TrafficLight* light) {
    cout << "Green -> Yellow" << endl;
    light->setState(new YellowState());
}
