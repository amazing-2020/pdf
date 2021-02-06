#include <stdio.h>
#include <stdlib.h>

float add(float a, float b){
    return a+b;}
float minu(float a, float b){
    return a-b;}
int main() 
{
    float (*pfunArry[2])(float, float) = {&add, &minu};
    double k = pfunArry[0](3.33, 2.22);
    printf("%f \n", k);
    k = pfunArry[0](3.33, 2.22);
    printf("%f \n", k);

    return 0;
}