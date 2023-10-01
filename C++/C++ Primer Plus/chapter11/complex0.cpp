//compile with Exercise11_7.cpp
#include <iostream>
#include "complex0.h"

complex::complex(double r, double i)
{
    real = r;
    imagine = i;
}

complex::~complex()
{
}

complex complex::operator+(const complex &s) const
{
    complex add;
    add.real = real + s.real;
    add.imagine = imagine + s.imagine;
    return add;
}

complex complex::operator-(const complex &s) const
{
    complex sub;
    sub.real = real - s.real;
    sub.imagine = imagine - s.imagine;
    return sub;
}

complex complex::operator*(const complex &s) const
{
    complex mut;
    mut.real = real * s.real - imagine * s.imagine;
    mut.imagine = real * s.imagine + imagine * s.real;
    return mut;
}

complex operator*(double n, const complex & s)
{
    complex mut;
    mut.real = n * s.real;
    mut.imagine = n * s.imagine;
    return mut;
}

complex complex::operator~() const
{
    complex m;
    m.real = real;
    m.imagine = -imagine;
    return m;
}

std::ostream & operator<<(std::ostream &os, const complex &c)
{
    os << "(" << c.real << "," << c.imagine << "i)";
    return os;
}

std::istream & operator>>(std::istream & in, complex & c)
{
    using std::cout;
    cout << "real: ";
    in >> c.real;
    if (in.fail())
        return in;
    cout << "imaginary: ";
    in >> c.imagine;
    if (in.fail())
        return in;
    return in;
}