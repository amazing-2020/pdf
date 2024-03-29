// compile with stonewt.cpp
#include <iostream>
using std::cout;
#include "stonewt.h"
void display(const Stonewt & st, int n);
int main()
{
    Stonewt incognito = 275;
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);

    cout << "The celebrity weighed ";
    incognito.show_stn();
    cout << "The detective weighted ";
    wolfe.show_stn();
    cout << "The President weighted ";
    taft.show_lbs();
    incognito = 276.8;
    taft = 325;
    cout << "After dinner, the celebrity weighted ";
    incognito.show_stn();
    cout << "After dinner, the President weighted ";
    taft.show_lbs();
    display(taft, 2);
    cout << "The wrestler weighted even more.\n";
    display(422, 2);
    cout << "No stone unearned\n";

    // exercise11.4
    Stonewt temp = 2 * taft;
    temp.show_stn();
    return 0;
}

void display(const Stonewt & st, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << "Wow!\n";
        st.show_stn();
    }
}