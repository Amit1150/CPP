#include "Account.h"

bool Account::deposit(double amount)
{
    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if((balance - amount) >= 0){
        balance -= amount;
        return true;
    } else{
        return false;
    }
}

