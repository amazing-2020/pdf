// compile with the Exercise10_3.cpp
#include <iostream>
#include <cstring>
#include "golf.h"

Golf::Golf()
{
    fullname[0] = '\0';
    handicap_ = 0;
}

Golf::Golf(const char *str, int a)
{
    strncpy(fullname, str, len);
    handicap_ = a;
}

int Golf::setgolf()
{
    using std::cout;
    using std::cin;

    char str[len];
    int num;
    cout << "Enter the full name: ";
    cin.getline(str, len);
    if (str[0] == '\0')
        return 0;
    else
    {
        cout << "Enter the handicap: ";
        cin >> num;
        cin.get();
        *this = Golf(str, num);
        return 1;
    }
}

void Golf::showgolf() const
{
    if (fullname[0] != '\0')
        std::cout << fullname << " has " << handicap_ << " handicaps." << std::endl;
}

void Golf::handicap(const int hc)
{
    handicap_ = hc;
}