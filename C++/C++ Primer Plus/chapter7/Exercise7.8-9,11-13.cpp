#include <iostream>
int replace(char * str, int c1, int c2);
int showInt(const char * str);
int judge(int (*)(const char *));

struct application {
    char name[30];
    int credit_ratings[3];
};
void show_app(application a);
void show_app_p(application * a);


void f1(application * a);
const char * f2(const application * a1, const application * a2);
typedef void (*pf1)(application *);
pf1 p1 = f1;
pf1 ap[5];
typedef const char * (*pf2)(const application *, const application *);
pf2 p2 = f2;
pf2 pa[10];

int main()
{
    using namespace std;
    // 9 對第一個字符的地址使用接引用運算符,
    // 都輸出一個字符
    cout << *"pizza" << "||" << "taco"[2] << endl;
    // 11
    cout << judge(showInt) << endl;


    return 0;
}

int replace(char * str, int c1, int c2)
{
    int n = 0;
    while (str)
    {
        if (*str == c1)
        {
            *str = c2;
            n++;
        }
        str++;
    }
    return n;
}

int showInt(const char * arr)
{
    return int(*arr);
}

int judge(int (*p)(const char *))
{
    const char * pp = "gcc+++++";
    return (*p)(pp);
}

void show_app(application a)
{
    std::cout << a.name << "'s rate score: ";
    for (int i = 0; i < 3; ++i)
        std::cout << "#" << i+1 << ": " << a.credit_ratings[i] << std::endl;
}

void show_app_p(application * a)
{
    std::cout << a->name << "'s rate score: ";
    for (int i = 0; i < 3; ++i)
        std::cout << "#" << i+1 << ": " << a->credit_ratings[i] << std::endl;
}