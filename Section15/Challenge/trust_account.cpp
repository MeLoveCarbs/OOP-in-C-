#include "trust_account.h"

trust_account::trust_account(std::string name, double balance, double int_rate)
    : Savings_Account(name, balance, int_rate)
{
}

trust_account::~trust_account()
{
}

bool trust_account::deposit(double amount)
{
    if (this->count >=4)
        std::cout << "Sorry you have exceeded the maximum number of times you can deposit. Max limit: 3" << std::endl;

    if (amount >=5000.0 && this->count < 4) {
        amount += 50.0;
        if (Savings_Account::deposit(amount)) {
            std::cout << "Wow, thats a huge deposit! A commendable action deserves a commendable reward, you have received an addition $50 into your account!" << std::endl;
            this->count += 1;
            return true;
        }
        else
            return false;
    }
    else if (amount < 5000 && this->count < 4)
        return Savings_Account::deposit(amount);
    else
        return false;
}
trust_account &trust_account::operator+=(double amount)
{
    deposit(amount);
    return *this;
}
trust_account &trust_account::operator-=(double amount)
{
    withdraw(amount);
    return *this;
}


std::ostream &operator<<(std::ostream &os, const trust_account &ref)
{
    os << "[Trust Account: " << ref.name << ": " << ref.balance << ", " << ref.int_rate << "%]";
    return os;
}
