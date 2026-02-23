#include <iostream>
#include "ChairType.h"

using namespace std;

ChairType::ChairType(string d, string c, string m)
    : design(d), color(c), material(m) {
}

void ChairType::display(int seatNumber, string studentName) {
    cout << "Seat No: " << seatNumber
        << ", Student: " << studentName
        << ", Design: " << design
        << ", Color: " << color
        << ", Material: " << material << endl;
}
