#ifndef STONEWT2_H_
#define STONEWT2_H_
#include <iostream>
class Stonewt
{
public:
    enum Mode {STONE, POUND};
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
    Mode m;
public:
    Stonewt(double lbs, Mode m = POUND);
    Stonewt(int stn, double lbs, Mode m = STONE);
    Stonewt();
    ~Stonewt();
    Stonewt operator+(const Stonewt & s1) const;
    Stonewt operator-(const Stonewt & s1) const;
    Stonewt operator*(double n) const;
    friend Stonewt operator*(double n,const Stonewt & s) {return s * n;}
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & s);
};
#endif
