#include "Mystring.h"

Mystring::Mystring()  // no args ctor
    :str(nullptr)
{
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *stringptr) //1 arg ctor
    :str(nullptr)
{
    str = new char[std::strlen(stringptr)+1];
    std::strcpy(str, stringptr);
}
Mystring::Mystring(const Mystring &source) //copy ctor
    :str(nullptr)
{
    str = new char[std::strlen(source.str)+1];
    std::strcpy(str, source.str);
}
Mystring::~Mystring() //dtor
{
    delete [] str;
}
Mystring::Mystring(Mystring &&source) //move ctor
{
    str = source.str;
    source.str = nullptr;
}
Mystring &Mystring::operator-() // all lower case operator
{
    for (size_t i {0}; i<std::strlen(this->str); i++) {
        this->str[i] = std::tolower(this->str[i]);
    }
    return *this;
}
Mystring &Mystring::operator=(const Mystring &rhs) //copy equal assigment operator **Note: returns mystring because of chain assignment, if its only a=b, theres actually no need to return the object.
{
    if (this == &rhs)
        return *this;
    delete [] str;
    str = new char[std::strlen(rhs.str)+1];
    std::strcpy(str, rhs.str);
    return *this;
}
Mystring &Mystring::operator=(Mystring &&rhs) //move equal assignment operator
{
    if (this == &rhs)
        return *this;
    delete [] this->str;
    this->str = rhs.str;
    rhs.str = nullptr;
    return *this;
}
bool Mystring::operator==(const Mystring &rhs) // comparing == operator
{
    return (std::strcmp(this->str, rhs.str) == 0);
}
bool Mystring::operator !=(const Mystring &rhs) // comparing != operator
{
    return (std::strcmp(this->str, rhs.str) != 0);
}
bool Mystring::operator<(const Mystring &rhs) // comparing < operator
{
    if (std::strcmp(this->str, rhs.str) < 0)
        return true;
    else
        return false;
}
bool Mystring::operator>(const Mystring &rhs) // comparing > operator
{
    if (std::strcmp(this->str, rhs.str) > 0)
        return true;
    else
        return false;
}
Mystring Mystring::operator+(const Mystring &rhs) // adds two string tgt operator
{
    char *buff = new char[(std::strlen(this->str) + std::strlen(rhs.str)+1)];
    std::strcpy(buff, this->str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}
Mystring &Mystring::operator+=(const Mystring &rhs) // adds itself and a string value tgt operator
{
    char *buff = new char [std::strlen(this->str) + std::strlen(rhs.str)+1];
    std::strcpy(buff, this->str);
    std::strcat(buff, rhs.str);
    delete [] str;
    str = new char [std::strlen(this->str) + std::strlen(rhs.str) + 1];
    str = buff; //type: char, = assignment is shallow copy and not deep copy, manual moving of ptr is required.
    buff = nullptr;
    delete [] buff;
    return *this;
}
Mystring &Mystring::operator-=(const Mystring &rhs) // adds both string tgt and returns all lower case operator
{
    char *buff = new char [std::strlen(this->str) + std::strlen(rhs.str)+1];
    std::strcpy(buff, this->str);
    std::strcat(buff, rhs.str);
    for (size_t i {0}; i<(std::strlen(this->str) + std::strlen(rhs.str)); i++)
        buff[i] = tolower(buff[i]);
    delete [] this->str;
    this->str = new char [std::strlen(this->str) + std::strlen(rhs.str)+1];
    this->str = buff; //type: char, = assignment is shallow copy and not deep copy, manual moving of ptr is required.
    buff = nullptr;
    delete [] buff;
    return *this;
}
Mystring &Mystring::operator*=(int multiply) // multiply itself by a desired number
{
    Mystring temp{};
    for (int i {0}; i<multiply; i++)
        temp+=(*this);
    *this = temp;
    return *this;
}
Mystring Mystring::operator*(int multiply) // multiply a string by a desired number
{
    Mystring temp{};
    for (int i {0}; i<multiply; i++)
        temp+=(*this);
    return temp;
}
Mystring &Mystring::operator++() // prefix operator  -make itself all uppercase and return it
{
    for (size_t i {0}; i<std::strlen(this->str); i++)
        this->str[i] = std::toupper(this->str[i]);
    return *this;
}
Mystring Mystring::operator++(int) // postfix operator - return original self BY VALUE and then make itself uppercase
{
    Mystring temp{*this};
    operator++();
    return temp;
}
std::ostream &operator<<(std::ostream &os, const Mystring &ref)
{
    os << ref.str;
    return os;
}
std::istream &operator>>(std::istream &in, Mystring &ref)
{
    char *buff = new char[400];
    in >> buff;
    ref = Mystring{buff};
    delete [] buff;
    return in;
}
