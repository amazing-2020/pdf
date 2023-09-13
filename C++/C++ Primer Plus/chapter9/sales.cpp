#include <iostream>
#include "sales.h"

namespace SALES
{
    void setSales(Sales & s, const double ar[], int n)
    {
        int size = QUARTERS;
        if (n < QUARTERS)
        {
            size = n;
            for (int i = 0; i < size; ++i)
                s.sales[i] = ar[i];
            for (int i = size; i < QUARTERS; ++i)
                s.sales[i] = 0;
        } else {
            /*
             * 复制传入的数组并进行排序
             */
            double * temp = new double [n];
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
                s.sales[i] = temp[i];

            delete[] temp;
        }

        s.min = s.max = s.average = s.sales[0];
        for (int i = 1; i < size; ++i)
        {
            if (s.max < s.sales[i])
                s.max = s.sales[i];
            if (s.min > s.sales[i])
                s.min = s.sales[i];
            s.average += s.sales[i];
        }
        s.average /= size;
    }
    
    void setSales(Sales & s)
    {
        using std::cin;
        using std::cout;

        cout << "Enter the 4 sales number: \n";
        cout << "Sale 1: ";
        cin >> s.sales[0];
        s.max = s.min = s.sales[0];
        s.average = s.sales[0];
        for (int i = 1; i < QUARTERS; ++i)
        {
            cout << "Sale " << i+1 << ": ";
            cin >> s.sales[i];
            if (s.max < s.sales[i])
                s.max = s.sales[i];
            if (s.min > s.sales[i])
                s.min = s.sales[i];
            s.average += s.sales[i];
        }
        s.average /= QUARTERS;
    }
    
    void showSales(const Sales & s)
    {
        using std::cout;
        using std::endl;
        cout << "In this sale, here is the condition:\n";
        for (int i = 0; i < QUARTERS; ++i) {
            if (s.sales[i] != 0)
                cout << "Sale " << i+1 << " : " << s.sales[i] << "\t";
        }
        cout << "\nThe max sale is " << s.max << endl;
        cout << "The min sale is " << s.min << endl;
        cout << "The sale's average is " << s.average << endl;
    }
}