#include "ChairFactory.h"

int main() {

    ChairFactory factory;

    ChairType* chair =
        factory.getChair("Modern Classroom Chair",
            "Brown",
            "Wood");

    // Extrinsic state changes
    chair->display(1, "Amit");
    chair->display(2, "Ravi");
    chair->display(3, "Pramod");
    chair->display(4, "David");

    return 0;
}

