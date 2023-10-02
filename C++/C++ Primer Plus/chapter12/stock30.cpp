// compile with Exercise12_3.cpp
#include <iostream>
#include <cstring>
#include "stock30.h"

Stock::Stock()
{
    company = new char [7];
    std::strcpy(company, "no name");
    shares = 0;
    share_val = 0;
    total_val = 0;
}

Stock::Stock(const char *co, long n, double pr)
{
    company = new char [std::strlen(co) + 1];
    strcpy(company, co);
    if (n < 0)
    {
        std::cout << "Number of shares can't negative; "
                  << company << " shares set to zero.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tol();
}

Stock::~Stock()
{
    delete[] company;
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted.\n";
    } else {
        shares += num;
        share_val = price;
        set_tol();
    }
}

void Stock::sell(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        std::cout << "You can't sell more than you have! "
                  << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tol();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tol();
}

std::ostream & operator<<(std::ostream & os, const Stock & s)
{
    using std::cout;
    using std::ios_base;

    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    os << "Company: " << s.company
         << " Shares: " << s.shares << '\n'
         << " Share Prices: $" << s.share_val;
    os.precision(2);
    os << " Total Worth: $" << s.total_val << '\n';

    os.setf(orig, ios_base::floatfield);
    os.precision(prec);
    return os;
}

const Stock & Stock::topval(const Stock & s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}