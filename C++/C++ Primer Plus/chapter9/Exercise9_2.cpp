#include <iostream>
#include <string>
const int ArSize = 10;
void strcount(const std::string & str);

int main()
{
    using namespace std;
    string input;

    cout << "Enter a line:\n";
    getline(cin, input);
    while (input != "")
    {
        if (input.length() > ArSize)
            input = input.substr(0, ArSize);
        strcount(input);
        cout << "Enter the next line (empty line to quit):\n";
        getline(cin, input);
    }
    cout << "Bye\n";
    return 0;
}

void strcount(const std::string & str)
{
    using namespace std;
    static int total = 0;
    int count = 0;

    cout << "\"" << str << "\" contains ";
    count = str.size();
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}