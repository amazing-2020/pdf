// compile with Exercise10_6.cpp
#include <iostream>
#include "move.h"
Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    using std::cout;
    cout << "X = " << x << ", Y = " << y << '\n';
}

Move Move::add(const Move &m) const
{
    double a;
    double b;
    a = m.x + this->x;
    b = m.y + this->y;
    return Move(a, b);
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}
