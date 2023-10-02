//compile with Exercise10_4.cpp
#include <iostream>
#include "sales.h"

namespace SALES
{
    Sales::Sales()
    {
        using std::cin;
        using std::cout;

        cout << "Enter the 4 sales number: \n";
        cout << "Sale 1: ";
        cin >> sales[0];
        max = min = sales[0];
        average = sales[0];
        for (int i = 1; i < QUARTERS; ++i)
        {
            cout << "Sale " << i+1 << ": ";
            cin >> sales[i];
            if (max < sales[i])
                max = sales[i];
            if (min > sales[i])
                min = sales[i];
            average += sales[i];
        }
        average /= QUARTERS;
    }

    Sales::Sales(const double *ar, int n)
    {
        int size = QUARTERS;
        if (n < QUARTERS)
        {
            size = n;
            for (int i = 0; i < size; ++i)
                sales[i] = ar[i];
            for (int i = size; i < QUARTERS; ++i)
                sales[i] = 0;
        } else {
            /*
             * 复制传入的数组并进行排序
             */
            double *temp = new double[n];
            for (int i = 0; i < n; ++i)
                temp[i] = ar[i];
            for (int i = 0; i < n; ++i) {
                for (int j = i; j < n; ++j) {
                    using std::swap;
                    if (temp[i] < temp[j])
                        swap(temp[i], temp[j]);
                }
            }
            for (int i = 0; i < size; ++i)
                sales[i] = temp[i];

            delete[] temp;
        }

        min = max = average = sales[0];
        for (int i = 1; i < size; ++i)
        {
            if (max < sales[i])
                max = sales[i];
            if (min > sales[i])
                min = sales[i];
            average += sales[i];
        }
        average /= size;
    }

    void Sales::showSales() const
    {
        using std::cout;
        using std::endl;
        cout << "In this sale, here is the condition:\n";
        for (int i = 0; i < QUARTERS; ++i) {
            cout << "Sale " << i+1 << " : " << sales[i] << "\t";
        }
        cout << "\nThe max sale is " << max << endl;
        cout << "The min sale is " << min << endl;
        cout << "The sale's average is " << average << endl;
    }
}
