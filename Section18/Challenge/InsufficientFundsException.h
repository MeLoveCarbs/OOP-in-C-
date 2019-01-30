#pragma once

class InsufficientFundsException : public std::exception
{
public:
    InsufficientFundsException() = default;
    virtual ~InsufficientFundsException() = default;
    virtual const char * what() const noexcept override // what() method doesn't override because im missing the FULL signature const char *what() const noexcept, only then can i override it.
    {
        return "You don't have that much money in your account to withdraw bruh.";
    }
};
