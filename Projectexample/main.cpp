/* This program will allow you to understand the inner workings
 * of how copy and move constructors behaves as well as
 * how destructors work too */


#include <iostream>
#include "pointer_test.h"
#include <vector>

using namespace std;

int main(void)
{

    vector<pointer_test> vec;

    vec.push_back(pointer_test{10});
    cout << endl;
    vec.push_back(pointer_test(20));
    cout << endl;
    vec.push_back(pointer_test(30));
    cout << endl;

    return 0;

}
