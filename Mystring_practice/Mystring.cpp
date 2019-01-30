#include "Mystring.h"
#include <iostream>
#include <cstring>

Mystring::Mystring() //no args ctr
    :str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *s) //overloaded arg ctr
    :str {nullptr}
{
    if (s==nullptr) {
        str = new char[1];
        *str = '\0';
    }
    else {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}
Mystring::Mystring(const Mystring &source)
    :str{nullptr}
{
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}


Mystring::~Mystring()
{
}
