#ifndef FOOD_MENU_H
#define FOOD_MENU_H

#include <map>
#include <string>

class FoodMenu {
private:
    std::map<int, std::string> Thai_Food;
    std::map<int, std::string> italian_Food;
    std::map<int, std::string> japanese_food;

public:
    FoodMenu();

    void italian();
    void thai();
    void japanese();
};

#endif
