#ifndef HOTEL_MANAGEMENT_H
#define HOTEL_MANAGEMENT_H

#include "Cleaning.h"
#include "FoodMenu.h"
#include "Decoration.h"

class HotelManagement {
private:
    Cleaning cleaning;
    FoodMenu menu;
    Decoration decoration;

public:
    void reception();
    void orderFood();
    void italian_menu();
    void thai_menu();
    void japanese_menu();
};

#endif
