#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int index(char arr[], int size, char a) //finds index of a char in a given array
{
    for (int i{0}; i < size; i++) {
        if (arr[i] == a)
            return i;
    }
    return '\0';
}
bool valid_braces(std::string braces)
{

    char open[3] = {'(', '[', '{'};
    char close[3] = {')', ']', '}'};
    char *check = new char [braces.size()/2] {'\0'};
    int count{0};
    for (size_t i{0}; i<braces.size(); i++) {
        if (braces[i] == open[0] || braces[i] == open[1] || braces[i] == open[2]) {
            check[count] = braces[i];
            count += 1;
        }
        else if (braces[i] == close[0] || braces[i] == close[1] || braces[i] == close[2]) {
            count -= 1;
            if (index(close, 3, braces[i]) == index(open, 3, check[count]))  //check if index at braces == index at check[] -> open braces
                check[count] = '\0';
        }
    }
    bool flag{true};
    for (size_t i{0}; i < braces.size()/2; i++) {
        if (check[i] != '\0')
            flag = false;
    }
    delete [] check;
    return flag;
}
int main(void)
{
    cout << boolalpha << endl;
    cout << valid_braces("((([])))" ) << endl;
    return 0;
}
