// Simple Account
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>

class I_Printable
{
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj)
    {
        obj.print(os);
        return os;
    }
public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~I_Printable() = default;
};

class Account : public I_Printable
{
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    virtual void print(std::ostream &os) const override
    {
        os << "[Account: " << (*this).name << ": " << (*this).balance  << "]";
    }
    Account(std::string name = def_name, double balance = def_balance);
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);
    virtual ~Account() = default;
};
#endif
