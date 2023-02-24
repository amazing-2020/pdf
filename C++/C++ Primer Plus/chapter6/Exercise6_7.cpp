#include <iostream>
#include <cctype>
#include <cstring>
const int max_len = 60;
int main()
{
    using namespace std;
    char arr[max_len];
    int vowels = 0, consonants = 0, others = 0;
    cout << "Enter words (q to quit):\n";
    while (cin >> arr)
    {
        if (strlen(arr) == 1 && arr[0] == 'q')
            break;
        if (isalpha(arr[0]))
        {
            switch (arr[0]) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vowels++;
                    break;
                default:
                    consonants++;
                    break;
            }
        } else {
            others++;
        }
    }
    cout << vowels << " words beginning with vowels" << endl;
    cout << consonants << " words beginning with consonants" << endl;
    cout << others << " others" << endl;

    return 0;
}