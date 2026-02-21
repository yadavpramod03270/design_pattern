#ifndef ATM_PROXY_H
#define ATM_PROXY_H

#include "Atm_machine.h"

class AtmProxy : public Atm_machine {
    Atm_machine* realAccount;
    bool authenticated;
    int correctPin;

public:
    AtmProxy(Atm_machine* acc);

    bool login() override;
    void logout() override;
    int fetch_balance() override;
    void Withdraw(int amount) override;
    void Deposit(int amount) override;
};

#endif
