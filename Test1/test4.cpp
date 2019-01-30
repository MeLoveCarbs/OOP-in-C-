//Practice *Note that when vec.size() = 0, vec.size()-1= MAX_UINT(maximum unsigned integer) since it wraps around positively to the max value it can hold.
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    int result {0}, val {0}, data{0};
    vector<int> vec {};
    cout << "Number of val: ";
    cin >> val;
    cout << "val itself: ";
    for (int i{0}; i < val; i ++) {
        cin >> data;
        vec.push_back(data);
    } 
    /*
    cout << "\nvec size: " << vec.size() << endl; // exception for when vector size is 0 because (vec.size() -1 = MAX_UINT) when vec.size() of type<unsigned> = 0.
    for (unsigned i{0}; i<vec.size()-1; i++) {
        cout << "test: " << vec.size()-1 << "\n" << vec.size()-2 << endl;
        break;
        for (unsigned n{1+i}; n<vec.size(); n++) {
            result += vec.at(i) * vec.at(n);
        }
    }
    cout << result << endl;
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return 0;
}

*/