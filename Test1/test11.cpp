//Practicing dynamic memory alloc with old school arrays

#include <iostream>

using namespace std;

int main(void) {
    
    int *testptr {nullptr};
    
    cout << "size of array" << endl;
    
    int size {0};
    
    cin >> size;
    
    testptr = new int [size];
    
    cout << "What are the values?" << endl;
    
    for (int i {0}; i < size; i++) 
        cin >> testptr[i];
    int sum {0};
    for (int i {0}; i < size; i++)
        sum += testptr[i];
    cout << "Sum of the values: " << sum << endl;
    
    delete [] testptr;
    
    return 0;
}