#include <iostream>
class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    friend Time operator+(const Time & t1, const Time & t2);
    friend Time operator-(const Time & t1, const Time & t2);
    friend Time operator*(const Time & t, double m);
    friend Time operator*(double m, const Time & t)
    { return t * m; }
    friend std::ostream & operator<<(std::ostream & os, const Time & t);
};


Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time operator+(const Time & t1, const Time & t2)
{
    Time sum;
    sum.minutes = t1.minutes + t2.minutes;
    sum.hours = sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time operator-(const Time & t1, const Time & t2)
{
    Time diff;
    int tol1, tol2;
    tol1 = t1.minutes + t1.hours * 60;
    tol2 = t2.minutes + t2.hours * 60;
    diff.minutes = (tol2 - tol1) % 60;
    diff.hours = (tol2 - tol1) / 60;
    return diff;
}

Time operator*(const Time & t, double n)
{
    Time result;
    long totalminutes = t.hours * 60 * n + t.minutes * n;
    result.hours = totalminutes / 60;
    result.minutes = totalminutes % 60;
    return result;
}

std::ostream & operator<<(std::ostream & os, const Time & t)
{
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}

int main()
{
    using std::cout;
    using std::endl;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;

    cout << "Aida and Tosca:\n";
    cout << aida << ";" << tosca << endl;
    temp = aida + tosca;
    cout << "Aida + Tosca: " << temp << endl;
    temp = aida * 1.17;
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10.0 * Tosca: " << 10.0 * tosca << endl;

    return 0;
}