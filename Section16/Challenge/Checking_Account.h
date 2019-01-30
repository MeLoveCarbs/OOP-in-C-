#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include <iostream>
#include <string>
#include "Account.h"

class Checking_Account: public Account
{
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_check_fee = 1.5;
public:
    virtual void print(std::ostream &os) const override
    {
        os << "[Checking_Account: " << (*this).name << ": " << (*this).balance  << "]";
    }
    Checking_Account(std::string name = def_name, double balance = def_balance);
    virtual bool withdraw(double amount) override;
    virtual ~Checking_Account() = default;
    // Inherits the Account::deposit method
};

#endif // _CHECKING_ACCOUNT_H_
