//pointer arithmetic, remember that only array[] variable are pointers, which points to the first elements. Advanced data types like vectors and strings, their declared variables is not a pointer.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> test1 {1, 2, 3}; 
    vector<int>* ptr {&test1}; // **declaring pointer vector must include<> template also.
    
    int arr[5] {1, 2, 3};
    int* ptr1 {arr};
    
    cout << ptr1 << endl;
    
    cout << (*ptr).at(1) << endl;

    return 0;
}