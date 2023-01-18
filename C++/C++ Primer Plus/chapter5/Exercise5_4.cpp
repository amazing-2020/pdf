#include <iostream>
int main()
{
    using namespace std;
    int year = 0;
    double DaProfit = 100, ClProfit = 100;

    while (ClProfit <= DaProfit)
    {
        DaProfit += 10;
        ClProfit *= 1.05;
        year++;
    }
    cout << year << " years passed, " << "Daphne's profit is " << DaProfit << ", Cleo's profit is " << ClProfit << endl;
    return 0;
}