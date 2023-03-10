#include <iostream>
//2
void song(const char * name = "O.My Papa", int times = 1);
//3
void iquote(int a);
void iquote(double a);
void iquote(std::string a);
//4
struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void showValue(box & b);
void show_set(box & b);
//6
    //a
double mass(double density, double volume = 1);
    //b
void repeat(int n, std::string str);
void repeat(std::string str, int n = 5);
    //c
int average(int a, int b) { return  (a+b) / 2;}
double average(double a, double b) { return  (a+b) / 2.0;}
    //d
    /* Invalid
char mangle(const char * str);
char * mangle(const char * str);
    */
//7
template<typename T>
T MaxV(T &a, T &b);
//8
// some problems in reference the box struct, problem 7 and 8
template <> box MaxV<box>(box &b1, box &b2);

int main()
{
    using namespace std;

    song();
    song("Oh, why I can't do it!", 9);

    iquote(2);
    iquote(2.00 * 0.1);
    iquote("2.00 string");

    box b1 = {"Jack", 52, 56, 23, 66976};
    box b2 = {"John Trump", 45, 89, 56};
    showValue(b1);
    show_set(b2);
    showValue(b2);

    cout << mass(99.2, 56) << "\u006b\u0067" << endl;
    cout << mass(0.002) << "\u006b\u0067" <<endl;

    repeat(10, "I'm OK!");
    repeat("But you're kind of stupid");

    cout << average(3, 6) << endl;
    cout << average(3.0, 6.0) << endl;

/*
    char ch = mangle("I'm glad to meet you");
    cout << ch << endl;
*/
    int a = 233, b = 56;
    char f = 'f', g = 'g';
    double x = 56.233, y = 895.333301;
    cout << MaxV(a, b) << endl;
    cout << MaxV(f, g) << endl;
    cout << MaxV(x, y) << endl;

    box bm = MaxV(b1, b2);
    cout << "The biggest box is:\n";
    showValue(bm);

    return 0;
}

void song(const char * name, int times)
{
    for (int i = 0; i < times; ++i)
        std::cout << name << std::endl;
}

void iquote(int a)
{
    std::cout << a << std::endl;
}

void iquote(double a)
{
    std::cout << a << std::endl;
}

void iquote(std::string a)
{
    std::cout << a << std::endl;
}

void showValue(box & b)
{
    std::cout << "The box maker is " << b.maker << ", its height is " << b.height << "\u006d\u006d, the width is "
              << b.width << "\u006d\u006d, the length is " << b.length << "\u006d\u006d, the volume is " << b.volume
              << "\u006d\u006d\u00b3" << std::endl;
}

void show_set(box & b)
{
    std::cout << "The box maker is " << b.maker << ", its height is " << b.height << "\u006d\u006d, the width is "
              << b.width << "\u006d\u006d, the length is " << b.length << "\u006d\u006d." << std::endl;
    b.volume = b.height * b.length * b.width;
}

double mass(double density, double volume)
{
    return density * volume;
}
void repeat(int n, std::string str)
{
    for (int i = 0; i < n; ++i)
        std::cout << str << std::endl;
}

void repeat(std::string str, int n)
{
    for (int i = 0; i < n; ++i)
        std::cout << str << std::endl;
}

template<typename T>
T MaxV(T &a, T &b)
{
    return a > b ? a : b;
}

template <> box MaxV<box>(box &b1, box &b2)
{
    return b1.volume > b2.volume ? b1 : b2;
}