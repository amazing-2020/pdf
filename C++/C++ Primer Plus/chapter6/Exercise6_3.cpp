#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    char ch;
    cout << "Please enter one of the following choices:\n";
    cout << "c) carnivore p) pianist\n"
         << "t) tree g) game\n";
    while (cin.get(ch).get() && isalpha(ch))
    {
        switch (ch) {
            case 'c':
                cout << "A tiger is a carnivore." << endl;
                break;
            case 'p':
                cout << "Ludwig van Beethoven is a pianist." << endl;
                break;
            case 't':
                cout << "A maple is a tree." << endl;
                break;
            case 'g':
                cout << "Civilization VI is a game." << endl;
                break;
            default:
                cout << "Please enter a c, p, t, or g: ";
                break;
        }
        if (ch == 'c' || ch == 'p' || ch == 't' || ch == 'g')
            break;
    }
    return 0;
}