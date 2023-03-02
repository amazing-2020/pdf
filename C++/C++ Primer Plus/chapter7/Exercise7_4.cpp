#include <iostream>
long double probability(unsigned numbers, unsigned picks);
int main()
{
    using namespace std;
    cout << "You have one chance in ";
    cout << probability(47, 5) * probability(27, 1);
    cout << " of winning.\n";
    cout << "bye!\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; p--, n--)
        result = result * n / p;
    return result;
}