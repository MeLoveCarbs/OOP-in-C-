#include "checking_account.h"

checking_account::checking_account(std::string name, double balance)
    :Account(name, balance)
{
}

checking_account::~checking_account()
{
}

bool checking_account::withdraw(double amount)
{
    if (Account::balance - 1.50 > 0) {
        if (Account::withdraw(amount+1.50)) {
            std::cout << "Withdrawn fee of $1.50 has been imposed" << std::endl;
            return true;
        }
        else
            return false;
    }
    else {
        std::cout << "Minimum balance must be $1.51 to withdraw" << std::endl;
        return false;
    }
}

checking_account &checking_account::operator+=(double amount)
{
    deposit(amount);
    return *this;
}
checking_account &checking_account::operator-=(double amount)
{
    withdraw(amount);
    return *this;
}

std::ostream &operator<<(std::ostream &os, const checking_account &ref)
{
    os << "[Account: " << ref.name << ": " << ref.balance << "]";
    return os;
}
