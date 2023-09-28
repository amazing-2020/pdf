// compile with vect.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
#include "vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step; //存储每一段的路程
    Vector result(0.0, 0.0);
    unsigned long steps = 0, sum = 0, Max, Min;
    double target;
    double dstep;
    int N;

    cout << "Enter the number of time you want to test: ";
    cin >> N;
    cout << "Enter target distance (q to quit): ";
    for (int i = 0; i < N && (cin >> target); ++i) {
        cout << "Enter step length: ";
        while (!(cin >> dstep))
            break;

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        if (i == 0)
            sum = Max = Min = steps;
        if (Max < steps)
            Max = steps;
        if (Min > steps)
            Min = steps;
        sum += steps;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "\nThe average: " << sum / N << ", the max: " << Max << ", the min: " << Min << endl;
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;

    return 0;
}