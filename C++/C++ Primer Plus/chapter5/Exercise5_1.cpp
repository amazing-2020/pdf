#include <iostream>
int main()
{
    using namespace std;
    long x, y, sum = 0;
    cin >> x >> y;
    for (int i = x; i <= y ; ++i) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}