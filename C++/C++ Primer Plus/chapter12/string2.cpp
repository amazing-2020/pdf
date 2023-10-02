// compile Exercise12_2.cpp
#include <cstring>
#include <cctype>
#include "string2.h"
using std::cout;
using std::cin;

int String::num_strings = 0;

int String::HowMany()
{
    return num_strings;
}

String::String(const char *s)
{
    len = std::strlen(s);
    str = new char [len+1];
    std::strcpy(str, s);
    num_strings++;
}

String::String()
{
    len = 4;
    str = new char [1];
    str[0] = '\0';
    num_strings++;
}

String::String(const String & st)
{
    num_strings++;
    len = st.len;
    str = new char [len + 1];
    std::strcpy(str, st.str);
}

String::~String()
{
    num_strings--;
    delete[] str;
}

String & String::operator=(const String & st)
{
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char [len + 1];
    std::strcpy(str, st.str);
    return *this;
}

String & String::operator=(const char * s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char [len + 1];
    std::strcpy(str, s);
    return *this;
}

String String::operator+(const String & s) const
{
    char * temp = new char [len + s.len + 1];
    strcpy(temp, str);
    strcpy(temp+len, s.str);
    String ret(temp);
    delete[] temp;
    return ret;
}

String String::operator+(const char * s) const
{
    String ret(s);
    ret = ret + *this;
    return ret;
}

char & String::operator[](int i) 
{
    return str[i];
}

const char &String::operator[](int i) const 
{
    return str[i];
}

String & String::stringlow()
{
    for (int i = 0; i < len; ++i)
        str[i] = tolower(str[i]);
    return *this;
}

String & String::stringup()
{
    for (int i = 0; i < len; ++i)
        str[i] = toupper(str[i]);
    return *this;
}

int String::has(const char ch) const
{
    int n = 0;
    for (int i = 0; i < len; ++i)
        if (ch == str[i])
            n++;
    return n;
}

bool operator<(const String & st, const String & st2)
{
    return (std::strcmp(st.str, st2.str) < 0);
}

bool operator>(const String & st1, const String & st2)
{
    return st1 < st2;
}

bool operator==(const String & st1, const String & st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

ostream & operator<<(ostream & os, const String & st)
{
    os << st.str;
    return os;
}

istream & operator>>(istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}