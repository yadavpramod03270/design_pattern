
#ifndef ATM_MACHINE_H
#define ATM_MACHINE_H

class Atm_machine {
public:
    virtual bool login() = 0;
    virtual void logout() = 0;
    virtual int fetch_balance() = 0;
    virtual void Withdraw(int amount) = 0;
    virtual void Deposit(int amount) = 0;
    virtual ~Atm_machine() = default;
};

#endif
