#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>
class complex
{
private:
    double real;
    double imagine;
public:
    complex(double r = 0.0, double i = 0.0);
    ~complex();
    complex operator+(const complex & s) const;
    complex operator-(const complex & s) const;
    complex operator*(const complex & s) const;
    friend complex operator*(double n, const complex & s);
    complex operator~() const;
    friend std::ostream & operator<<(std::ostream & os, const complex & c);
    friend std::istream & operator>>(std::istream & in, complex & c);
};
#endif