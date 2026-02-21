#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include "Atm_machine.h"

class Bank_Account : public Atm_machine {
    int balance;

public:
    Bank_Account();

    bool login() override;
    void logout() override;
    int fetch_balance() override;
    void Withdraw(int amount) override;
    void Deposit(int amount) override;
};

#endif

