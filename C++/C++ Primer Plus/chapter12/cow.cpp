// compile with Exercise12_1.cpp
#include <iostream>
#include <cstring>
#include "cow.h"

Cow::Cow()
{
    std::strcpy(name, "cow");
    hobby = new char [1];
    hobby[0] = '\0';
    weight = 0;
}

Cow::Cow(const char *num, const char *ho, double wt)
{
    std::strcpy(name, num);
    int len = std::strlen(ho);
    hobby = new char [len+1];
    std::strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow &c)
{
    strcpy(name, c.name);
    hobby = new char [std::strlen(c.hobby)+1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    delete[] hobby;
}

Cow & Cow::operator=(const Cow &c)
{
    if (this == &c)
        return *this;
    std::strcpy(name, c.name);
    delete[] hobby;
    hobby = new char [std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::showCow() const
{
    std::cout << name << " enjoy " << hobby << ", weight " << weight << " Kg.\n";
}