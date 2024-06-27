//compile with Exercise14_4.cpp
#include "personmi.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

Person::~Person() {}

void Person::Get()
{
    cout << "Enter the person's fisrt name: ";
    getline(cin, fname);
    cout << "Enter the person's last name: ";
    getline(cin, lname);
}

void Person::Data() const
{
    cout << "This person's name: " << fname << " " << lname << endl;
}

void Gunsliger::Get()
{
    cout << "Enter the person's draw time: ";
    cin >> shotTime;
    while (cin.get() != '\n')
        continue;
    cout << "Enter the number of notches: ";
    cin >> notches;
    while (cin.get() != '\n')
        continue;
}

void Gunsliger::Data() const
{
    cout << "the person's draw time: " << shotTime << "\n";
    cout << "the number of notches on the gun: " << notches << endl;
}

void Gunsliger::Set()
{
    cout << "This is a gunsilger: \n";
    Person::Get();
    Get();
}

void Gunsliger::Show() const
{
    cout << "A gunslinger: " << '\n';
    Person::Data();
    Data();
}

void Gunsliger::personShow() const
{
    cout << "A gunslinger: " << '\n';
    Person::Data(); 
}

char Card::Vstr[15][3] = 
{"A", "1", "2", "3", "4", "5", 
"6", "7", "8", "9", "10", "J", "Q", "K", "NO"};

void Card::Data() const
{
    switch (suit) {
        case 0: cout << "♠" << ' '; break;
        case 1: cout << "♥" << ' '; break;
        case 2: cout << "♣" << ' '; break;
        case 3: cout << "♦" << ' '; break;
        default: cout << "NUll" << ' '; break;
    };
    cout << Vstr[value] << endl;
}

void Card::Show() const
{
    cout << "Let's get a new poker card: ";
    Data();
}

void PokerPlayer::Get()
{
    Person::Get();
}

void PokerPlayer::Set()
{
    cout << "This is a new pokerplayer: \n";
    Get();
}

Card & PokerPlayer::Draw() 
{
    int rannumber = std::rand() % 51 + 1;
    cout << rannumber << endl;
    (Card &)(*this) = Card(rannumber);
    return (Card &)(*this);
}

void PokerPlayer::Show() const
{
    cout << "This is a pokerplayer: \n";
    Person::Data();
}

void BadDude::Get()
{
    Gunsliger::Get();
}

void BadDude::Data() const
{
    Gunsliger::Data();
}

void BadDude::Set()
{
    Person::Get();
    Get();
}

double BadDude::Gdraw() const
{
    return Gunsliger::Draw();
}

Card & BadDude::Cdraw()
{
    return PokerPlayer::Draw();
}

void BadDude::Show() const
{
    cout << "Oh badbude! ";
    Person::Data();
    Data();
}

void BadDude::personShow() const
{
    cout << "Oh badbude! ";
    Person::Data();
}
