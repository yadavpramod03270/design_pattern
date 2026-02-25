#include "TrafficLight.h"
#include "RedState.h"

int main() {

    TrafficLight light(new RedState());

    light.requestChange();
    light.requestChange();
    light.requestChange();
    light.requestChange();

    return 0;
}
