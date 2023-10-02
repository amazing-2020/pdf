// compile with queue.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"
const int MIN_PER_HR = 60;

void calculate(double & customer_wait, double & customer_per_hr);
bool newcustomer(double x);

int main()
{
    using std::cout;
    using std::endl;
    double cus_wait_time = 9;
    double cus_per_hr;

    for (cus_per_hr = 999; cus_per_hr > 0; --cus_per_hr)
    {
        calculate(cus_wait_time, cus_per_hr);
        if (cus_wait_time <= 1.1)
            break;
    }
    cout << "For this simulation, the best number of customer is: " << cus_per_hr << endl;


    return 0;
}

void calculate(double & customer_wait, double & customer_per_hr)
{
    std::srand(std::time(0));

    int qs = 30;
    Queue line(qs);

    int hours = 200;

    long cyclelimit = hours * MIN_PER_HR;

    double perhour = customer_per_hr;
    double min_per_cust;
    min_per_cust = MIN_PER_HR / perhour;

    Item temp;
    long turn_ways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;
    int wait_time = 0;
    long line_wait = 0;
    for (int cycle = 0; cycle < cyclelimit; ++cycle)
    {
        if (newcustomer(min_per_cust))
        {
            if (line.isfull())
                turn_ways++;
            else
            {
                customers++;
                temp.set(cycle);
                line.enqueue(temp);
            }
        }
        if (wait_time <= 0 && !line.isempty())
        {
            line.dequeue(temp);
            wait_time = temp.prtime();
            line_wait += cycle - temp.when();
            served++;
        }
        if (wait_time > 0)
            wait_time--;
        sum_line += line.queuecount();
    }
    customer_wait = (double ) line_wait / served;
}

bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}