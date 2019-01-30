//practice
#include <iostream>

#include<string>

#include<iomanip>

using namespace std;

int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    for(int i{0}; i<str.length(); i++)    {
        for(int m=(str.length())-(i+1); m>=0; m--) {
            cout<<" ";
        }
        for(int j{0}; j<=i; j++) {
            cout<<str.at(j);
        }
        for(int k=i-1; k>=0; k--) {
            cout<<str.at(k);
        }
        cout<<endl;
    }
    return 0;
}
