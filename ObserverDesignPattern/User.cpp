#include <iostream>
#include "User.h"

using namespace std;

User::User(const string& n) : name(n) {}

void User::notify(const string& videoName) {
    cout << name << " got notification: "
        << videoName << endl;
}
