//Practicing with vectors, far more superior than arrays with options to change the vector size and compile warnings/errors when referencing out of the vector size.
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    vector <int> vector1;
    vector <int> vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    vector <vector <int>> vector_2d;
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "vectors2d are as follows: \n" 
            << vector_2d.at(0).at(0) << "," << vector_2d.at(0).at(1)<< "\n" 
            << vector_2d.at(1).at(0) << "," << vector_2d.at(1).at(1)<< endl;
    
    vector1.at(0) = 1000;
    
    cout << "\nUpdated: \n" 
             << vector_2d.at(0).at(0) << "," << vector_2d.at(0).at(1)<< "\n" 
             << vector_2d.at(1).at(0) << "," << vector_2d.at(1).at(1)<< endl;
            
    cout << "\nVector1 elements: \n" << vector1.at(0) << "," << vector1.at(1) << endl;
    cout << "\nVector2 elements: \n" << vector2.at(0) << "," << vector2.at(1) << endl;
    return 0;
}