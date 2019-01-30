//Practice
#include <iostream>

using namespace std;

int main(void) {
    int money {0}, dollar {0}, quarter {0}, dime {0}, nickel {0}, penny {0};
    cout << "Enter an amount in cents: ";
    cin >> money;
    cout << endl;
    while (money > 0) {
        if (money / 100 > 0) {
            dollar += 1;
            money -= 100;
        } else if (money / 25 > 0) {
            quarter += 1;
            money -= 25;
        } else if (money / 10 > 0) {
            dime += 1;
            money -= 10;
        }else if (money /5 > 0) {
                nickel += 1;
                money -= 5;
        } else if (money / 1 > 0) {
                penny += 1;
                money -= 1;
            }
        }
        cout << "dollars: " << dollar << "\n" << "quarters: " << quarter << "\n" << "dimes: " << dime << "\n" << "nickels: " << nickel << "\n" << "pennies: " << penny << endl;
    return 0;
}