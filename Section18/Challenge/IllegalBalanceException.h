#ifndef __ILLEGAL_BALANCE_EXCEPTION_H__
#define __ILLEGAL_BALANCE_EXCEPTION_H__

class IllegalBalanceException : public std::exception
{
public:
    IllegalBalanceException() {}
    virtual ~IllegalBalanceException() {}
    virtual const char *what() const noexcept override// what() method doesn't override because im missing the FULL signature const char *what() const noexcept, only then can i override it.
    {
        return "Negative balance bruh";
    }
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__
