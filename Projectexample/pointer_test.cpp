#include "pointer_test.h"
#include <iostream>

pointer_test::pointer_test(int val) //initializing constructor
{
    data = new int;
    *data = val;
    std::cout << "Constructor for data: " << *data << ", additional memory block is used " << data <<  std::endl; //NOTE: copy constructor will also call the cout for this line of code as well since its delegating work to it.
}
pointer_test::pointer_test(const pointer_test &ref) //copy constructor
    :pointer_test(*ref.data)
{
    std::cout << "Copy constructor created, additional memory block is used: " << *data << " ," << data << std::endl;
}

pointer_test::pointer_test(pointer_test &&ref) //move constructor
    :data(ref.data)
{
    ref.data = nullptr;
    std::cout << "Move constructor, no additional memory is used: " << *data << "," << data << std::endl;
}

pointer_test::~pointer_test() //destructor
{
    if (data == nullptr) {
        std::cout << "DESTRUCTOR for null ptr, stolen guy" << std::endl;
    }
    else {
        std::cout << "DESTRUCTOR for " << data << " , guy that stole the data" << ": " << *data << std::endl;
    }
}
