//practice
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void menu(int &choice);
string encrypt(string alphabet, string key);
string decrypt(string alphabet, string key);


int main(void) {
    string alphabet {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvqxyz"};
    string key {"qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"};
    int choice {0};
    
    do {
    menu(choice);
    if (choice == 1)
        cout << "\nYour message is encrypted as " << encrypt(alphabet,  key) << endl;
    else if (choice == 2)   
        cout << "\nYour message is decrypted as follows: " << decrypt(alphabet,  key) << endl;
    else if (choice == 3)
        cout << "\nThank you for using our service!" << endl;
    else
        cout <<"\nPlease enter the right option" << endl;
    } while (choice != 3);
    
    return 0;
}

void menu(int &choice) {
    cout << "\nWelcome to encrypting and decrypting service!" 
            << "  Choose your option: \n1) Encrypt message\n2) Decrypt message\n3) Quit\n" << endl;
    cin >> choice;
    fflush(stdin);
    return;
}

string encrypt(string alphabet, string key) {
    cout << "Please type in the message you want to encrypt: ";
        string locked {};
       getline(cin, locked);
        for (size_t i{0}; i < locked.length(); i++) {
            if (isalpha(locked.at(i)))
                locked.at(i) = key.at(alphabet.find(locked.at(i)));
        }
    return locked;
}

string decrypt(string alphabet, string key) {
    cout << "Please type in your encrypted message: ";
        string unlocked {};
        getline(cin, unlocked);
        for (size_t i{0}; i < unlocked.length(); i++) {
            if (isalpha(unlocked.at(i)))
                unlocked.at(i) = alphabet.at(key.find(unlocked.at(i)));
        }
    
    return unlocked;
}
