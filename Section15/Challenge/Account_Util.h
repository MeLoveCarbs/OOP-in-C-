#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "checking_account.h"
#include "trust_account.h"

// Utility helper functions for Account class

void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

// Utility helper functions for Savings Account class

void display(const std::vector<Savings_Account> &accounts);
void deposit(std::vector<Savings_Account> &accounts, double amount);
void withdraw(std::vector<Savings_Account> &accounts, double amount);

// Utility helper functions for Checking Account class

void display(const std::vector<checking_account> &accounts);
void deposit(std::vector<checking_account> &accounts, double amount);
void withdraw(std::vector<checking_account> &accounts, double amount);

// Utility helper functions for Trust Account class

void display(const std::vector<trust_account> &accounts);
void deposit(std::vector<trust_account> &accounts, double amount);
void withdraw(std::vector<trust_account> &accounts, double amount);
#endif
