// compile with plorg.cpp
#include "plorg.h"

int main()
{
    Plorg a;
    Plorg b("Nike");
    a.showprolg();
    b.showprolg();
    a.edit(90);
    a.showprolg();
    b.edit(66);
    b.showprolg();
    return 0;
}