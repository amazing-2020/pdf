// compile with Exercise11_5.cpp
#include <iostream>
using std::cout;
#include "stonewt2.h"
Stonewt::Stonewt(double lbs, Mode mode)
{
    stone = int (lbs) / Lbs_per_stn;
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    m = mode;
}

Stonewt::Stonewt(int stn, double lbs, Mode mode)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    m = mode;
}

Stonewt::Stonewt()
{
    stone = pds_left = pounds = 0;
    m = POUND;
}

Stonewt::~Stonewt()
{
}

Stonewt Stonewt::operator+(const Stonewt &s1) const
{
    Stonewt result(s1.pounds + pounds);
    return result;
}

Stonewt Stonewt::operator-(const Stonewt &s1) const
{
    Stonewt result(pounds - s1.pounds);
    return result;
}

Stonewt Stonewt::operator*(double n) const
{
    Stonewt result(n * pounds);
    return result;
}

std::ostream & operator<<(std::ostream & os, const Stonewt & s)
{
    if (s.m == Stonewt::POUND)
        os << s.pounds << " pounds.\n";
    else if (s.m == Stonewt::STONE)
        os << s.stone << " stone, " << s.pds_left << " pounds.\n";
    else
        os << "Stonewt object mode is invalid\n";
    return os;
}

