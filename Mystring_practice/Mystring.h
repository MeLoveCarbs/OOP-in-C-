#ifndef _MY_STRING_
#define _MY_STRING_
#include <iostream>
#include <cstring>

class Mystring
{
private:
    char *str;
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    ~Mystring();

    void display() const
    {
        std::cout << str << std::endl;
    }
    int get_length() const
    {
        return strlen(str);
    }
    const char *get_str() const
    {
        return str;
    }

};

#endif // _MY_STRING_
