// compile with external.cpp
// example9.6
#include <iostream>

extern double warming;

void update(double dt);
void local();

using std::cout;

void update(double dt)
{
    extern double warming;
    warming += dt;
    cout << "Update global warming to " << warming;
    cout << " degrees.\n";

}

void local()
{
    double warming = 0.8;
    cout << "Local warming is " << warming << " degrees.\n";

    cout << "But global warming = " << ::warming;
    cout << " degrees.\n";
}