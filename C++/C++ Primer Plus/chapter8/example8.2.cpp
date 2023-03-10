#include <iostream>
int main()
{
    using namespace std;
    int rates = 101;
    int & rodents = rates;
    cout << "rates = " << rates;
    cout << ", rodents = " << rodents << endl;
    rodents++;
    cout << "rates = " << rates;
    cout << ", rodents = " << rodents << endl;
    cout << "rates address = " << &rates;
    cout << ", rodents address = " << &rodents << endl;
    return 0;
}