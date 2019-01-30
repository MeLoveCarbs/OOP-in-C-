#include <iostream>

using namespace std;

int* apply_all(int arr1[], int arr2[], int size1, int size2);
void print(int arr[], int size);

int main(void) {
    int arr1[] {1, 2, 3, 4, 5};
    int arr2[] {10, 20, 30};
    
    cout << "Array 1: ";
    print(arr1, 5);
    cout << endl;
    
    cout << "\nArray 2: ";
    print(arr2, 3);
    cout << endl;
    
    int *results = apply_all(arr1, arr2, 5, 3);
    cout << "\nResult: ";
    print(results, 15);
    cout << endl;
    
    delete [] results;
    return 0;
}
int* apply_all(int arr1[], int arr2[], int size1, int size2) {
    int* result = new int[size1*size2];
    int count {0};
    
    for (int i{0}; i<size1; i++) {
        for (int n{0}; n<size2; n++) {
            result[count] = arr1[i] * arr2[n];
            count += 1;
        }
    }
    return result; 
}

void print(int arr[], int size) {
    cout << "[";
    
    for (int i{0}; i<size; i++)
        cout << " " << arr[i];
    cout << " ]";
    return;
}