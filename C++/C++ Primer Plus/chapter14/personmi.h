#ifndef PERSONMI_H_
#define PERSONMI_H_
#include <cstdlib>
#include <string>
using std::string;

class Person {
    private:
        string fname;
        string lname;
    protected:
        void Get();
        void Data() const;
    public:
        Person() : fname("test"), lname("test") {}
        Person(const string & fn, const string & ln) : fname(fn), lname(ln) {}
        virtual ~Person() = 0; 
        virtual void Set() = 0;
        virtual void Show() const = 0;
};

class Gunsliger : virtual public Person {
    private:
        double shotTime;
        int notches;
    protected:
        void Get();
        void Data() const;
    public:
        Gunsliger() : Person(), shotTime(0), notches(0) {}
        Gunsliger(const string & fn, const string & ln, double st, int ns) : Person(fn, ln), shotTime(st), notches(ns) {}
        Gunsliger(const Person & p, double st, int ns) : Person(p), shotTime(st), notches(ns) {}
        double Draw() const {return shotTime;}
        void Set();
        void Show() const;
        void personShow() const;
};

class Card {
    private:
        static char Vstr[15][3];
        int suit;
        int value;
        int number;
    protected:
        void Data() const;
    public:
        Card() { number = 0, suit = 10, value = 13;}
        Card(int n) : suit(n % 4), value((n-1) % 13), number(n) {}
        void Show() const;
};

class PokerPlayer : virtual public Person {
    private:
        Card c;
    protected:
        void Get();
    public:
        PokerPlayer() : Person(), c() {}
        PokerPlayer(const string & fn, const string & ln) : Person(fn, ln) {}
        PokerPlayer(const Person & p) : Person(p) {}
        Card & Draw();
        void Set();
        void Show() const;
};

class BadDude : public Gunsliger, public PokerPlayer {
    protected:
        void Get();
        void Data() const;
    public:
        BadDude() {}
        BadDude(const string & fn, const string & ln, double st, int ns) 
        : Person(fn, ln), Gunsliger(fn, ln, st, ns), PokerPlayer(fn, ln) {}
        BadDude(const Person & p, double st, int ns) 
        : Person(p), Gunsliger(p, st, ns), PokerPlayer(p) {}
        BadDude(const Gunsliger & g) 
        : Person(g), Gunsliger(g), PokerPlayer(g) {}
        BadDude(const PokerPlayer & p ,double st, int ns) 
        : Person(p), Gunsliger(p, st, ns), PokerPlayer(p) {}    
        double Gdraw() const;
        Card & Cdraw(); 
        void Set();
        void Show() const;
        void personShow() const;
};

#endif
