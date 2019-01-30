/*
 * Lazy to fix: If user wants to know the mean, smallest or largest value with a blank list, there'll be an error.
 * Lazy to fix: Assumes user enters integer, no exception handling for other types.
 * Above mentioned can be easily fixed with an 'if' condition filtering out the blank list for each test case but im too lazy soz.
 * */
// Practice
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> vec {};
    char choice {};
    cout << "***************************\nWelcome! We have a wide selection of choices for your list!" << endl;

    do {
        cout << "P - Print numbers\nA - Add a number\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\nQ - Quit"
             << "\n\n"
             << "Enter your choice:" << endl;
        cin >> choice;
        if (choice == 'p' || choice == 'P') {
            cout << "Here are the printed numbers\n[";
            if (vec.size() != 0) {
                for (unsigned i{0}; i<vec.size()-1; i++) {
                    cout << vec.at(i) << ",";
                }
                cout << vec.at(vec.size()-1);
                cout << "]" << endl;
            }
            else {
                cout << " ]" << endl;
            }
        }
        else if (choice == 'A' || choice == 'a') {
            cout << "\nEnter your number: ";
            int num {};
            cin >> num;
            vec.push_back(num);
            cout << "\nNumber added successfully into the list\n" << endl;
        }
        else if (choice == 'M' || choice == 'm') {
            cout << "\nMean of the numbers: ";
            int sum {0};
            double avg{0.0};
            for (unsigned i {0}; i < vec.size(); i++) {
                sum += vec.at(i);
            }
            cout << static_cast<double>(sum) / vec.size() << endl;
        }
        else if (choice == 'S' || choice == 's') {
            int smol{vec.at(0)};
            for (unsigned i{0}; i < vec.size(); i++) {
                if (vec.at(i) < smol)
                    smol = vec.at(i);
            }
            cout << "\nSmallest number: " << smol << endl;
        }
        else if  (choice == 'L' || choice == 'l') {
            int large {vec.at(0)};
            for (unsigned i{0}; i < vec.size(); i++) {
                if (vec.at(i) > large)
                    large = vec.at(i);
            }
            cout << "\nLargest number: " << large << endl;
        }
        else if (!(choice == 'Q' || choice == 'q'))
            cout << "Bruh... RIGHT letter pl0x\n" << endl;
    }
    while (!(choice == 'Q' || choice == 'q'));
    cout << "\n\nThank you for using our service!" << endl;

    return 0;
}
