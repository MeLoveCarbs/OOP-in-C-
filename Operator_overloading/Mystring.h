#ifndef _MY_STRING_
#define _MY_STRING_
#include <string>
#include <cstring>
#include <iostream>

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &ref); // output stream for Mystring obj
    friend std::istream &operator>>(std::istream &in, Mystring &ref); // input stream for Mystring obj

private:
    char *str; //pointer to a string of c-style char.

public:
    Mystring();  // no args ctor
    Mystring(const char *stringptr); //1 arg ctor
    ~Mystring(); //dtor
    Mystring(const Mystring &source); //copy ctor
    Mystring (Mystring &&source); //move ctor
    Mystring &operator-(); // all lower case operator
    Mystring &operator=(const Mystring &rhs); //copy equal assigment operator
    Mystring &operator=(Mystring &&rhs); //move equal assignment operator
    bool operator==(const Mystring &rhs); // comparing == operator
    bool operator !=(const Mystring &rhs); // comparing != operator
    bool operator <(const Mystring &rhs); // comparing < operator
    bool operator >(const Mystring &rhs); // comparing > operator
    Mystring operator+(const Mystring &rhs); // adds two string tgt operator
    Mystring &operator+=(const Mystring &rhs); // adds itself and a string value tgt operator
    Mystring &operator-=(const Mystring &rhs); // adds both string tgt and returns all lower case operator
    Mystring &operator*=(int multiply); // multiply itself by a desired number
    Mystring operator*(int multiply); // multiply a string by a desired number
    Mystring &operator++(); // prefix operator  -make itself all uppercase and return it
    Mystring operator++(int); // postfix operator - return original self BY VALUE and then make itself uppercase
};

#endif // _MY_STRING_
