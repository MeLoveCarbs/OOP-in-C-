#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    public:
    string name;
    int health;
    int exp;
    
    
    void talk(string) {};
    bool is_dead();
    
};

class Account {
    public:
    string name;
    double balance;
    
    bool deposit(double);
    bool withdraw(double);
};

int main(void) {
    Player frank {};
    frank.health = 500;
    cout << frank.health << endl;
    
    return 0;
}