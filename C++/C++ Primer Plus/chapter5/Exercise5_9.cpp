#include <iostream>
#include <string>
int main()
{
    using namespace std;
    int count = 0;
    string temp;

    cout << "Enter words (to stop, type word done):\n";
    while (cin >> temp && temp != "done")
        count++;
    cout << "You entered a total of " << count << " words.\n";
    return 0;
}