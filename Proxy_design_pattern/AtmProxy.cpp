#include <iostream>
#include "AtmProxy.h"

using namespace std;

AtmProxy::AtmProxy(Atm_machine* acc)
    : realAccount(acc), authenticated(false), correctPin(1234) {
}

bool AtmProxy::login() {
    int pin;
    cout << "Enter PIN: ";
    cin >> pin;

    if (pin == correctPin) {
        authenticated = true;
        cout << "[ATM] Login successful\n";
        return true;
    }

    cout << "[ATM] Wrong PIN\n";
    return false;
}

void AtmProxy::logout() {
    authenticated = false;
    cout << "[ATM] Logged out\n";
}

int AtmProxy::fetch_balance() {
    if (!authenticated) {
        cout << "[ATM] Please login first\n";
        return -1;
    }
    return realAccount->fetch_balance();
}

void AtmProxy::Withdraw(int amount) {
    if (!authenticated) {
        cout << "[ATM] Please login first\n";
        return;
    }
    realAccount->Withdraw(amount);
}

void AtmProxy::Deposit(int amount) {
    if (!authenticated) {
        cout << "[ATM] Please login first\n";
        return;
    }
    realAccount->Deposit(amount);
}
