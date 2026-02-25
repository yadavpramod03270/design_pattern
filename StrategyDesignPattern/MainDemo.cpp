#include "Bicycle.h"
#include "Bike.h"
#include "Car.h"
#include "ChooseStrategy.h"

int main() {

    Bicycle bicycle;
    Bike bike;
    Car car;

    ChooseStrategy strategy(&bicycle);
    strategy.startJourney(200);

    strategy.setStrategy(&bike);
    strategy.startJourney(500);

    strategy.setStrategy(&car);
    strategy.startJourney(1000);

    return 0;
}
