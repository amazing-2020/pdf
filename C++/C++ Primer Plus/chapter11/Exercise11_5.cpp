#include <iostream>
using std::cout;
#include "stonewt2.h"

int main()
{
    Stonewt incognito = 275;
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);

    cout << "The celebrity weighed ";
    cout << incognito;
    cout << "The detective weighted ";
    cout << wolfe;
    cout << "The President weighted ";
    cout << taft;

    Stonewt plus = incognito + wolfe;
    cout << "Add: " << plus;
    Stonewt sub = wolfe - incognito;
    cout << "Subtract: " << sub;
    Stonewt multi = 6.3 * taft;
    cout << "Multiply: " << multi;
    return 0;
}