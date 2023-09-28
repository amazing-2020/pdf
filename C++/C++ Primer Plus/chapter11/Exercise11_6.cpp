#include <iostream>
using std::cout;
using std::cin;
#include "stonewt3.h"

int main()
{
    Stonewt cmp(11, 0.0);
    Stonewt arr[6] = {
            {58},
            {895},
            {1024},
    };
    Stonewt max = arr[0], min = arr[0];
    double temp;
    int count = 0;

    for (int i = 0; i < 3; ++i)
    {
        cout << "Enter the last three object(pounds): ";
        cin >> temp;
        arr[3+i] = Stonewt(temp);
    }
    for (int i = 0; i < 6; ++i) {
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
        if (arr[i] >= cmp)
            count++;
    }
    cout << "The max: ";
    max.show_stn();
    cout << "The min: ";
    min.show_stn();
    cout << count << " object bigger than ";
    cmp.show_lbs();

    return 0;
}