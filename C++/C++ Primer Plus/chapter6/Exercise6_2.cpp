#include <iostream>
#include <array>
const int SIZE = 10;
int main()
{
    using namespace std;
    array<double, SIZE> donation;

    int i = 0;
    double sum = 0.0, avg = 0;
    int count = 0;
    cout << "The number #" << i+1 << ": ";
    while (i < SIZE && cin >> donation[i])
    {
        sum += donation[i];
        if (++i >= SIZE)
            break;
        cout << "The number #" << i+1 << ": ";
    }
    if (i > 0)
    {
        avg = sum / i;
        for (int j = 0; j < i; ++j)
            if (donation[j] > avg)
                count++;
    }
    /*
    cout << fixed;
    cout.precision(4);
    cout.setf(ios_base::showpoint);
    */
    cout << "The average of the " << i << " numbers = " << avg << ", " << count << " number is bigger than it." << endl;
    return 0;
}