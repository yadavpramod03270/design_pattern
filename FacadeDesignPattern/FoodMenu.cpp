#include <iostream>
#include "FoodMenu.h"

using namespace std;

FoodMenu::FoodMenu() {
    Thai_Food = {
        {1,"Stir-fried rice noodles"},
        {2,"Hot and sour soup with shrimp"},
        {3,"Coconut milk-based curry with green chilies"}
    };

    italian_Food = {
        {1,"Classic pizza with tomato"},
        {2,"Pasta with eggs"},
        {3,"Creamy saffron-infused rice dish"}
    };

    japanese_food = {
        {1,"Sushi"},
        {2,"Noodle soup with pork"},
        {3,"Seafood"}
    };
}

void FoodMenu::italian() {
    cout << "Italian food menu\n";
    cout << "Ref. No.     Dish\n";
    cout << "---------------------------\n";
    for (auto x : italian_Food)
        cout << x.first << "    " << x.second << endl;
}

void FoodMenu::thai() {
    cout << "Thai food menu\n";
    cout << "Ref. No.     Dish\n";
    cout << "---------------------------\n";
    for (auto x : Thai_Food)
        cout << x.first << "    " << x.second << endl;
}

void FoodMenu::japanese() {
    cout << "Japanese food menu\n";
    cout << "Ref. No.     Dish\n";
    cout << "---------------------------\n";
    for (auto x : japanese_food)
        cout << x.first << "    " << x.second << endl;
}
