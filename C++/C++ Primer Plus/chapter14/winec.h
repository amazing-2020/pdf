// used by Exercise14_1.cpp
#ifndef WINE_H_
#define WINE_H_

#include <iostream>
#include <string>
#include <valarray>
using std::cout;
using std::cin;
using std::endl;
using std::string;

template <class T1, class T2>
class Pair
{
private:
    T1 a;
    T2 b;
public:
    T1 & first();
    T2 & second();
    T1 first() const {return a;}
    T2 second() const {return b;}
    Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) {}
    Pair() {}
};

template <class T1, class T2>
T1 & Pair<T1, T2>::first()
{
    return a;
}
template <class T1, class T2>
T2 & Pair<T1, T2>::second()
{
    return b;
}

class Wine {
    private:
        string name;
        using ArrayInt = std::valarray<int>;
        using PairArray = Pair<ArrayInt, ArrayInt>;
        PairArray MakeTime_Num;
        int Years;
    public:
        Wine() 
        : name("none"), MakeTime_Num({0}, {0}), Years(0) {} 
        Wine(const char * l, int y) 
        : name(l), MakeTime_Num(ArrayInt(0, y), ArrayInt(0, y)), Years(y) {}
        Wine(const char * l, int y, const int yr[], const int bot[]) 
        : name(l), MakeTime_Num(ArrayInt(yr, y), ArrayInt(bot, y)), Years(y) {}
        void GetBottles();
        const string & Label() const;
        int sum() const;
        void Show() const;
};

void Wine::GetBottles()
{
    while (cin.get() != '\n') {
        continue;
    }
    cout << "Enter " << name << " data for " << Years << " year(s):\n";
    for (int i = 0; i < Years; i++) {
        cout << "Enter year: ";
        cin >> MakeTime_Num.first()[i];
        cin.get();
        cout << "Enter bottles for that year: ";
        cin >> MakeTime_Num.second()[i];
        cin.get();
    }
}

const string & Wine::Label() const
{
    return name;
}

int Wine::sum() const
{
    return MakeTime_Num.second().sum();
}

void Wine::Show() const
{
    cout << "Wine: " << name << "\n";
    cout << "\t\tYear" << "\t" << "Bottles\n";
    for (int i = 0; i < Years; i++) {
        cout << "\t\t"<< MakeTime_Num.first()[i] << Years <<"\t" << MakeTime_Num.second()[i] << endl;
    }
}

#endif