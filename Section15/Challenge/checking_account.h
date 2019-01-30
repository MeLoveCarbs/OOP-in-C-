#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"


class checking_account : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const checking_account &ref);
public:
    checking_account(std::string name = "Unnamed Checking Account", double balance = 0.0);
    ~checking_account();
    bool withdraw(double amount);
    checking_account &operator+=(double amount);
    checking_account &operator-=(double amount);

};

#endif // CHECKING_ACCOUNT_H
