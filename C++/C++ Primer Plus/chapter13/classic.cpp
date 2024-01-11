// compile with Exercise13_1.cpp
#include <iostream>
#include <cstring>
#include "classic.h"
using std::strcpy;
using std::cout;

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
    strcpy(performance, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d)
{
    strcpy(performance, d.performance);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::~Cd()
{
}

void Cd::Report() const
{
    cout << performance << ", " << label << ", sections: " << selections << ", playtime: " << playtime << std::endl;
}

Cd &Cd::operator=(const Cd &d)
{
    if (this == &d)
        return *this;
    strcpy(performance, d.performance);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(const char *song, const char *s1, const char *s2, int n, double x) : Cd(s1, s2, n, x)
{
    strcpy(songs, song);
}

Classic::Classic(const Classic &c) : Cd(c)
{
    strcpy(songs, c.songs);
}

Classic::Classic() : Cd()
{
    strcpy(songs, "null");
}

Classic::~Classic()
{
}

void Classic::Report() const
{
    Cd::Report();
    cout << songs << std::endl;
}

Classic &Classic::operator=(const Classic &c)
{
    Cd::operator=(c);
    strcpy(songs, c.songs);
}