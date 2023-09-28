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

Stonewt operator+(const Stonewt & s1, const Stonewt & s2)
{
    Stonewt result(s1.pounds + s2.pounds);
    return result;
}

Stonewt operator-(const Stonewt & s1, const Stonewt & s2)
{
    Stonewt result(s1.pounds - s2.pounds);
    return result;
}

Stonewt operator*(double n, const Stonewt & s)
{
    Stonewt result(n * s.pounds);
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

