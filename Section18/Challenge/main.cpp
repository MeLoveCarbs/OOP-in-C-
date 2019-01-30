#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "InsufficientFundsException.h"

using namespace std;

int main()
{
    // test your code here
    std::unique_ptr<Account> a = std::make_unique<Savings_Account>("Savings", 5000, 0.5);
    try {
        double num {0};
        std::cin >> num;
        Savings_Account a {"Savings", num, 0.5};
        cout << a << std::endl;
    }
    catch (std::exception &ex) { //using dynamic polymorphism of std::exception class via referencing. By reference = alias of exception object is passed into catch(), then virtual function what() will search for the correct class.
        std::cerr << ex.what() << std::endl;
    }
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}
