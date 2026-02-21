#include "Bank_Account.h"
#include "AtmProxy.h"

int main() {

    Atm_machine* bank = new Bank_Account();
    Atm_machine* atm = new AtmProxy(bank);

    if (atm->login()) {
        atm->fetch_balance();
        atm->Withdraw(300);
        atm->Deposit(20000);
        atm->fetch_balance();
        atm->logout();
    }

    delete atm;
    delete bank;

    return 0;
}

