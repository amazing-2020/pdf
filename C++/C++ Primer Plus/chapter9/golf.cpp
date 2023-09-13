//compile with Exercise9_1.cpp
#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf & g, const char * name, int hc)
{
    strncpy(g.fullname, name, len);
    g.handicap = hc;
}

int setgolf(golf & g)
{
    using std::cout;
    using std::cin;

    cout << "Enter the full name: ";
    cin.getline(g.fullname, len);
    if (g.fullname[0] == '\0')
        return 0;
    else
    {
        cout << "Enter the handicap: ";
        cin >> g.handicap;
        cin.get();
        return 1;
    }
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    if (g.fullname[0] != '\0')
        std::cout << g.fullname << " has " << g.handicap << " handicaps." << std::endl;
}
