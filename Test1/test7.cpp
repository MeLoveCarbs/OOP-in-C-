//practice
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(void) {
    string alphabet {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvqxyz"};
    string key {"qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"};
    int choice{0};
    
    do {
    cout << "\nWelcome to encrypting and decrypting service!" 
            << "  Choose your option: \n1) Encrypt message\n2) Decrypt message\n3) Quit\n" << endl;
    cin >> choice; //remember to flush everytime i use cin >> operator before using getline(cin, ..); since cin >> filters out \n and getline would automatically detect the \n if buffer isn't flushed.
    fflush(stdin);
    if (choice == 1) {
        cout << "Please type in the message you want to encrypt: ";
        string locked {};
//        cin >> locked;
       getline(cin, locked);
        for (size_t i{0}; i < locked.length(); i++) {
            if (isalpha(locked.at(i)))
                locked.at(i) = key.at(alphabet.find(locked.at(i)));
        }
        cout << "\n\nYour encrypted message is: " << locked << endl;
    } else if (choice == 2) {
        cout << "Please type in your encrypted message: ";
        string unlock {};
//        cin >> unlock;
        getline(cin, unlock);
        for (size_t i{0}; i < unlock.length(); i++) {
            if (isalpha(unlock.at(i)))
                unlock.at(i) = alphabet.at(key.find(unlock.at(i)));
        }
        cout << "\n\nYour decrypted message is: " << unlock << endl;
    } else if (!(choice == 1 || choice == 2 || choice == 3)) {
            cout << "\n\nEnter the right option" << endl;
        }
    } while (!(choice == 3));
        
cout << "Thank you for using our service" << endl;
    
    
    
    return 0;
}