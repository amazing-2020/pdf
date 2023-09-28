// compile with vect.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step; //存储每一段的路程
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;

    ofstream file("Exercise11_1.txt");
    if (!file.is_open())
    {
        cout << "Can't file the file" << endl;
        exit(-1);
    }
    int count;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        while (!(cin >> dstep))
            break;
        count = 0;
        file << "Target distance: " << target << ", Step size: " << dstep << endl;
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            count++;
            file << count << ": " << result << endl;
            steps++;
        }
        file << "After " << steps << " steps, the subject "
                                     "has the following location:\n";
        file << result << endl;
        result.polar_mode();
        file << " or\n" << result << endl;
        file << "Average outward distance per step = "
            << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;

    return 0;
}