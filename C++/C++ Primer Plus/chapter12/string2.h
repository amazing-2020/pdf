#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
    char * str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
public:
    String(const char * s);
    String();
    String(const String &);
    ~String();
    int length() const {return len;}
    String & operator=(const String &);
    String & operator=(const char *);
    String operator+(const String &) const;
    String operator+(const char *) const;
    char & operator[](int i);
    const char & operator[](int i) const;
    String & stringlow();
    String & stringup();
    int has(const char ch) const;

    friend bool operator<(const String & st, const String & st2);
    friend bool operator>(const String & st1, const String & st2);
    friend bool operator==(const String & st1, const String & st2);
    friend ostream & operator<<(ostream & os, const String & st);
    friend istream & operator>>(istream & is, String & st);
    friend String operator+(const char * s1, const String & s2) {return s2 + s1;}
    static int HowMany();
};
#endif