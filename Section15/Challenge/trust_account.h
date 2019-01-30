#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include <iostream>
#include "Savings_Account.h"
#include <string>

class trust_account : public Savings_Account
{
    friend std::ostream &operator<<(std::ostream &os, const trust_account &ref);
private:
    int count{1};
public:
    trust_account(std::string name = "Unnamed Trust Account", double balance = 0.0, double int_rate = 0.0);
    ~trust_account();
    bool deposit(double amount);
    trust_account &operator+=(double amount);
    trust_account &operator-=(double amount);

};

#endif // TRUST_ACCOUNT_H
