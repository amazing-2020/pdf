//using personmi.cpp
#include <cstring>
#include <iostream>
#include "personmi.h"
const int SIZE = 5;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;
    srand(time(0));

    Person * shoting[SIZE];

    int pt;
    for (pt = 0; pt < SIZE; pt++) {
        char choice;
        cout << "Enter the person category:\n"
             << "g: Gunsliger p: PokerPlayer "
             << "b: BadDude q: quit\n";
        cin >> choice;
        while (strchr("gpbq", choice) == NULL)
        {
            cout << "Please enter a g, p, b, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch (choice)
        {
            case 'g': shoting[pt] = new Gunsliger;
                    break;
            case 'p': shoting[pt] = new PokerPlayer;
                    break;
            case 'b': shoting[pt] = new BadDude;
                    break;
        }
        cin.get();
        shoting[pt]->Set();
    }
    cout << "\nHere is your staff:\n";
    int i;
    for (i = 0; i < pt; i++)
    {
        cout << endl;
        shoting[i]->Show();
    }
    for (i = 0; i < pt; i++)
        delete shoting[i];

    Gunsliger g("liu", "cloud", 123456, 10);
    g.personShow();
    cout << g.Draw() << endl;
    PokerPlayer p("poker", "1");
    p.Show();
    p.Draw().Show();
    BadDude b("badbunde", "usa", 6, 10);
    b.personShow();
    cout << "Shot time: " << b.Gdraw() << endl;
    b.Cdraw().Show();

    cout << "Bye.\n";

    return 0;
}
                    