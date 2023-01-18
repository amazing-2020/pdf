#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    int count = 0;
    char temp[100];

    cout << "Enter words (to stop, type word done):\n";
    while (cin >> temp && strcmp(temp, "done"))
        count++;
    cout << "You entered a total of " << count << " words.\n";
    return 0;
}