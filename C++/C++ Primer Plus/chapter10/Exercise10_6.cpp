// compile with move.cpp
#include <iostream>
#include "move.h"

int main()
{
    Move a;
    Move b(45, 99.8);

    a.showmove();
    a = a.add(b);
    a.showmove();
    a.reset();
    a.reset(6, 6);
    a.showmove();

    return 0;
}