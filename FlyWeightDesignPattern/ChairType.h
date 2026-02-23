#ifndef CHAIRTYPE_H
#define CHAIRTYPE_H

#include <string>

class ChairType {
private:
    std::string design;
    std::string color;
    std::string material;

public:
    ChairType(std::string d, std::string c, std::string m);

    void display(int seatNumber, std::string studentName);
};

#endif
