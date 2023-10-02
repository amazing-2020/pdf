// compile with cow.cpp
#include <iostream>
#include "cow.h"

int main()
{
    using std::cout;

    Cow a1("Mike", "Eating grass", 80);
    Cow a2;

    cout << "a1: ";
    a1.showCow();
    cout << "a2: ";
    a2.showCow();
    a2 = a1;
    cout << "a2: ";
    a2.showCow();
    Cow a3(a2);
    cout << "a3: ";
    a3.showCow();

    Cow a4 = Cow("Jack", "sleep on leafs", 60);
    cout << "a4: ";
    a4.showCow();
    a1 = a4;
    cout << "a1: ";
    a1.showCow();

    return 0;
}