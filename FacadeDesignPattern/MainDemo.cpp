#include <iostream>
#include "HotelManagement.h"
#include "SelectCuisine.h"

using namespace std;

int main() {

    HotelManagement hotel;

    hotel.reception();

    int choice;
    cout << "\nSelect Cuisine:\n";
    cout << "1. Thai\n";
    cout << "2. Italian\n";
    cout << "3. Japanese\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case THAI:
        hotel.thai_menu();
        break;
    case ITALIAN:
        hotel.italian_menu();
        break;
    case JAPANESE:
        hotel.japanese_menu();
        break;
    default:
        cout << "Invalid choice!\n";
    }

    return 0;
}

