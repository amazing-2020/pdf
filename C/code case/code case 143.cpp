#include <iostream>
using namespace std;
class Myclass
{
    public:
        Myclass(int a, int b, int c);
        void GetSum();
    private:
        int a;
        int b;
        int c;
        static int Sum;
};
int Myclass::Sum = 0;

Myclass::Myclass(int a, int b, int c)
{
    this->a;
    this->b;
    this->c;
    Sum += a + b + c;
}
void Myclass::GetSum()
{
    cout<<"Sum="<<Sum<<endl;
}
int main()
{
    Myclass M(1, 2, 3);
    M.GetSum();
    Myclass N(4, 5, 6);
    N.GetSum();
    M.GetSum();
}