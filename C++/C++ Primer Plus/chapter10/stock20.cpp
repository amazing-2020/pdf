// compile with example10.9.cpp
// example10.8
#include <iostream>
#include "stock20.h"

Stock::Stock()
{
    company = "no name";
    shares = 0;
    share_val = 0;
    total_val = 0;
}

Stock::Stock(const std::string &co, long n, double pr)
{
    company = co;

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

void Stock::show() const
{
    using std::cout;
    using std::ios_base;

    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company
         << " Shares: " << shares << '\n'
         << " Share Prices: $" << share_val;
    cout.precision(2);
    cout << " Total Worth: $" << total_val << '\n';

    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

const Stock & Stock::topval(const Stock & s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}