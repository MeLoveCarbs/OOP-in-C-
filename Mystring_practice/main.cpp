#include<iostream>
#include "Mystring.h"
int main(void)
{
    const char *s = "Hi";
    std::cout << s << std::endl;
    Mystring empty;
    Mystring larry("Larry"); //string literal can be represented by const char*.
    //Without const, the pointer can be varied and would cause undefined behaviour and the string literal of consecutive memory address will be disrupted.
    Mystring stooge {larry};

    empty.display();
    larry.display();
    stooge.display();

    return 0;
}
