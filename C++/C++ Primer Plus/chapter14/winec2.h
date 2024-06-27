// used by Exercise14_2.cpp
#ifndef WINE2_H_
#define WINE2_H_

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
    Pair<T1, T2> & operator=(Pair<T1, T2>);
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
template <>
Pair<std::valarray<int>, std::valarray<int>> & Pair<std::valarray<int>, std::valarray<int>>::operator=(Pair<std::valarray<int>, std::valarray<int>> a)
{   
    if (this == &a)
        return *this;
    (*this).first() = a.first();
    (*this).second() = a.second();
    return *this;
}

class Wine : private string, private Pair<std::valarray<int>, std::valarray<int>> {
    private:
        using ArrayInt = std::valarray<int>;
        using PairArray = Pair<ArrayInt, ArrayInt>;
        int Years;
    public:
        Wine() 
        : string("none"), PairArray({0}, {0}), Years(0) {}
        Wine(const char * l, int y) 
        : string(l), PairArray(ArrayInt(0, y), ArrayInt(0, y)), Years(y) {}
        Wine(const char * l, int y, const int yr[], const int bot[]) 
        : string(l), PairArray(ArrayInt(yr, y), ArrayInt(bot, y)), Years(y) {}
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
    cout << "Enter " << (string &)(*this) << " data for " << Years << " year(s):\n";
    /**/
    ArrayInt a(Years);
    ArrayInt b(Years);
    for (int i = 0; i < Years; i++) {
        cout << "Enter year: ";
        cin >> a[i];
        cin.get();
        cout << "Enter bottles for that year: ";
        cin >> b[i];
        cin.get();
    }
    (PairArray &)(*this) = PairArray(a, b);
    /**/
    /*
    for (int i = 0; i < Years; i++) {
        cout << "Enter year: ";
        cin >> PairArray::first()[i];
        cin.get();
        cout << "Enter bottles for that year: ";
        cin >> PairArray::second()[i];
        cin.get();
    }
    */
}

const string & Wine::Label() const
{

    return (const string &)(*this);
}

int Wine::sum() const
{
    return PairArray::second().sum();
}

void Wine::Show() const
{
    cout << "Wine: " << (const string &)(*this) << "\n";
    cout << "\t\tYear" << "\t" << "Bottles\n";
    for (int i = 0; i < Years; i++) {
        cout << "\t\t"<< PairArray::first()[i] << "\t" << PairArray::second()[i] << endl;
    }
}

#endif