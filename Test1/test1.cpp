//Practice
#include <iostream>
#include <string>
using namespace std;

int total_price(int rooms, double price) {
        double total {0};
        total = rooms * price;
    return total;
}

int main() {
    cout << "Estimate for carpet cleaning service" << endl;
    int small_room {0}, large_room {0};
    cout << "Number of small rooms: ";
    cin >> small_room;
    cout << endl;
    cout << "Number of large rooms: ";
    cin >> large_room;
    cout << endl;
    const double price_small {25}, price_large {35};
    const int valid {30};
    double total_price_small {0}, total_price_large {0}, tax{0};
    total_price_small = total_price(small_room, price_small);
    total_price_large = total_price(large_room, price_large);
    cout << "Hello, welcome to Weiyang's carpet cleaning service!" << endl;
    cout << "Total price of small room: $" << total_price_small << endl;
    cout << "Total price for large room: $" << total_price_large << endl;
    cout << "Cost: $" << total_price_large + total_price_small << endl;
    tax = (total_price_large + total_price_small) * 0.06;
    cout << "Tax: $" << tax << endl;
    cout << "=====================" << endl;
    cout << "Total estimate: $" << tax + total_price_small + total_price_large << endl;
    cout << "This estimate is valid for " << valid << "days." << endl;
    
    return 0;
}