#include <iostream>
using namespace std;

class test 
{
    public:
    int function(int a, char c) 
    {
        cout<<"this is function call "<<a<<" "<<c<<endl;
        return a;
    }
};

class test2
{
    public:
        int (test::*function1(double d)) (int, char)
        {
            cout<<d<<endl;
            return &test::function;
        }
};

int main()
{
    test mytest;
    test2 mytest2;
    int (test::*p) (int, char) = mytest2.function1(3.33);
    (mytest.*p)(1, 'a');

    return 0;
}