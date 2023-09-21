#include <iostream>
#include "bank.h"
Bank::Bank()
{
    name = "";
    account = "";
    money = 0;
}

Bank::Bank(const std::string &s1, const std::string &s2, const double &d)
{
    name = s1;
    account = s2;
    money = d;
}

Bank::~Bank()
{
}

void Bank::show() const
{
    using std::cout;
    cout << name << "\'s account: " << account << " own " << money << " dollars.\n";
}

void Bank::addMoney(const double m)
{
    money += m;
}

bool Bank::withdrawMoney(double m)
{
    if (money > m)
    {
        money -= m;
        return true;
    }
    else
        return false;
}

