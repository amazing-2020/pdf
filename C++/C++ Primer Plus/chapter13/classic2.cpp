// compile with Exercise13_2.cpp
#include <iostream>
#include <cstring>
#include "classic2.h"
using std::strcpy;
using std::strlen;
using std::cout;

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
    performance = new char [strlen(s1) + 1];
    strcpy(performance, s1);
    label = new char [strlen(s2) + 1];
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d)
{
    performance = new char [strlen(d.performance) + 1];
    strcpy(performance, d.performance);
    label = new char [strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::~Cd()
{
    delete[] performance;
    delete[] label;
}

void Cd::Report() const
{
    cout << performance << ", " << label << ", sections: " << selections << ", playtime: " << playtime << std::endl;
}

Cd &Cd::operator=(const Cd &d)
{
    if (this == &d)
        return *this;
    delete[] performance;
    performance = new char [strlen(d.performance) + 1];
    strcpy(performance, d.performance);
    delete[] label;
    label = new char [strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(const char *song, const char *s1, const char *s2, int n, double x) : Cd(s1, s2, n, x)
{
    songs = new char [strlen(song) + 1];
    strcpy(songs, song);
}

Classic::Classic(const Classic &c) : Cd(c)
{
    songs = new char [strlen(c.songs) + 1];
    strcpy(songs, c.songs);
}

Classic::Classic() : Cd()
{
    songs = new char [strlen("null") + 1];
    strcpy(songs, "null");
}

Classic::~Classic()
{
    delete[] songs;
}

void Classic::Report() const
{
    Cd::Report();
    cout << songs << std::endl;
}

Classic &Classic::operator=(const Classic &c)
{
    Cd::operator=(c);
    delete[] songs;
    songs = new char [strlen(c.songs) + 1];
    strcpy(songs, c.songs);
}