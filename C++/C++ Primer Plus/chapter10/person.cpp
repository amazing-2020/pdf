//compile with Exercise10_2.cpp
#include <iostream>
#include <cstring>
#include "person.h"

Person::Person(const std::string &ln, const char *fn)
{
    lname = ln;
    strncpy(fname, fn, LIMIT);
}

void Person::show() const
{
    cout << "First name: " << fname << ", Last name: " << lname << endl;
}

void Person::FormalShow() const
{
    cout << "Last name: " << lname << ", First name: "  << fname << endl;
}