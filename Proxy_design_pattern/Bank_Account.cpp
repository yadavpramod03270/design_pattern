#include <iostream>
#include "Bank_Account.h"

using namespace std;

Bank_Account::Bank_Account() : balance(5000) {}

bool Bank_Account::login() {
    return true;
}

void Bank_Account::logout() {}

int Bank_Account::fetch_balance() {
    cout << "Balance: " << balance << endl;
    return balance;
}

void Bank_Account::Withdraw(int amount) {
    if (amount <= balance) {
        balance -= amount;
        cout << "Withdrawn: " << amount << endl;
    }
    else {
        cout << "Insufficient balance\n";
    }
}

void Bank_Account::Deposit(int amount) {
    balance += amount;
    cout << "Deposited: " << amount << endl;
}
