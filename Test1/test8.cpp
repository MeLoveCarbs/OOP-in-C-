//practice
#include <iostream>

#include <string>

using namespace std;

int main(void)
{
    string user_input {};
    int multiplier {1};
    cout << "Enter user input: ";
    getline(cin, user_input);
    int pyramid {static_cast<int>(user_input.length()) - 1};
    fflush(stdin);
    for (size_t i {0}; i < user_input.length(); i++) {
        for (int x {0}; x < pyramid; x++)
            cout << " ";
        pyramid -= 1;
        for (size_t n {0}; n < (i*2)+1; n++) {
            string temp {user_input.substr(0, i+1)};
            if (n > i) {
                cout << temp.at(n - (2*multiplier));
                multiplier++;
            }
            else
                cout << temp.at(n);
        }
        multiplier = 1;
        cout << endl;
    }

    return 0;
}
