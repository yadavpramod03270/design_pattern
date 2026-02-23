#include "HotelManagement.h"

void HotelManagement::reception() {
    cleaning.cleanRoom();
    decoration.decorateRoom();
}

void HotelManagement::orderFood() {
    menu.italian();
    menu.thai();
    menu.japanese();
}

void HotelManagement::italian_menu() {
    menu.italian();
}

void HotelManagement::thai_menu() {
    menu.thai();
}

void HotelManagement::japanese_menu() {
    menu.japanese();
}
