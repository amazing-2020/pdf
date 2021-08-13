#include <iostream>
using namespace std;

class test
{
    public:
    test() 
    {
        cout<<"constructor"<<endl;
    }
    int fun1(int a, char c)
    {
        cout<<"this is fun1 call: "<<a<<" "<<c<<endl;
        return a;
    }
    void fun2(double d)const
    {
        cout<<"this is fun2 call: "<<d<<endl;
    }
    static double fun3(char buf[]) 
    {
        cout<<"this is fun3 call: "<<buf<<endl;
        return 3.14;
    }
};

int main()
{
    double (*pstatic) (char buf[])= NULL;
    pstatic = test::fun3;
    pstatic("myclaa");
    pstatic = &test::fun3;
    (*pstatic)("xyz");

    int (test::*pfun)(int, char) = NULL;
    pfun = &test::fun1;
    test mytest;
    (mytest.*pfun)(1, 'a');

    void (test::*pconst)(double)const = NULL;
    pconst = &test::fun2;
    test mytest2;
    (mytest2.*pconst) (3.33);

    return 0;
}