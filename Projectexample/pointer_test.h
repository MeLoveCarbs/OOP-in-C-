#ifndef _POINTER_TEST_
#define _POINTER_TEST_

class pointer_test
{
private:
    int *data;

public:
    pointer_test(int val);
    pointer_test(const pointer_test &ref);
    pointer_test(pointer_test &&ref);
    ~pointer_test();
};

#endif // _POINTER_TEST_
