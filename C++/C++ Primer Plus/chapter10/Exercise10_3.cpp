//compile with the golf.cpp
#include <iostream>
#include "golf.h"
const int size = 10;
int main()
{
    using namespace std;

    Golf arr[::size] = {
            {"Andy Hu", 89}
    };
    for (int i = 1; i < ::size; ++i)
        if (!arr[i].setgolf())
            break;
    for (int i = 0; i < ::size; ++i)
        arr[i].showgolf();
    arr[0].handicap(78);
    arr[0].showgolf();
    cout << "Bye!" << endl;
    return 0;
}