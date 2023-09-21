// compile with Exercise10_7.cpp
#include <iostream>
#include <cstring>
#include "plorg.h"

Plorg::Plorg(const char *str)
{
    strncpy(name, str, len);
    CI = 50;
}

void Plorg::edit(const int a)
{
    CI = a;
}

void Plorg::showprolg() const
{
    using std::cout;
    cout << name << "'s CI = " << CI << '\n';
}
