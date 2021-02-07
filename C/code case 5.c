#include <stdio.h>
#include <stdlib.h>

float add(float a, float b) 
{
    printf("%f \n", a+b);
    return a+b;
}
float minu(float a, float b)
{
    printf("%f  \n", a-b);
    return a-b;
}

typedef float(*pfunType)(float, float);

int main()
{
    pfunType p = &add; //定义函数指针变量
    p(3.33, 2.22);
    pfunType parray[2] = {&add, &minu};//定义函数指针数组
    parray[1](3.33, 2.22);

    return 0;
}