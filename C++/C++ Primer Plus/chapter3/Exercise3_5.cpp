#include <iostream>
int main()
{
    using namespace std;
    long long personN, usN;
    cout << "Enter the word's population: ";
    cin >> personN;
    cout << "Enter the population of the US: ";
    cin >> usN;
    cout << "The population of the US is " << (double)usN / personN * 100 << "% of the world population." << endl;
    return 0;
}