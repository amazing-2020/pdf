//compile with golf.cpp
#include <iostream>
#include "golf.h"
const int size = 10;
int main()
{
    using namespace std;

    golf arr[::size] = {0};
    setgolf(arr[0], "Andy Hu", 89);
    for (int i = 1; i < ::size; ++i)
        if (!setgolf(arr[i]))
            break;
    for (int i = 0; i < ::size; ++i)
        showgolf(arr[i]);
    handicap(arr[0], 78);
    showgolf(arr[0]);
    cout << "Bye!" << endl;
    return 0;
}