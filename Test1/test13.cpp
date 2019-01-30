#include <iostream>

using namespace std;

int main(void) {
    int arr[5] {1, 2, 3, 4, 5};
    int* p{arr};
    for (int i {0}; i<5; i++)
        cout << *(p++) << endl; // *p++ is difference from *++p
    
    return 0;
}