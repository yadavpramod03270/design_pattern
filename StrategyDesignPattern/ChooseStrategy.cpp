#include <iostream>
#include "ChooseStrategy.h"

using namespace std;

ChooseStrategy::ChooseStrategy(WayToAirport* w)
    : way(w) {
}

void ChooseStrategy::setStrategy(WayToAirport* w) {
    way = w;
}

void ChooseStrategy::startJourney(int amount) {
    cout << "You have started your journey!!" << endl;
    way->goToAirport(amount);
}
