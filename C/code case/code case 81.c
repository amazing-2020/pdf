#include <stdio.h>
#include <stdlib.h>

char str1(double dNum, char str[25]);
int main()
{
    char str[25];
    double dNum;
    int n=5;
    int point;
    scanf("%d", &point);
    if (point==1) {
        dNum = 9.876;
        str1( dNum, str);
    }
    else if (point==2)
    {
        dNum = -123.4567;
        str1( dNum,  str);
    }
    else if (point==3)
    {
        dNum = 0.678e5;
        str1( dNum,  str);
    }
    else {
        printf("There is nothing! \n");
    }
    
    return 0;
}
char str1(double dNum, char str[25])
{
    double l=dNum;
    int n=5;
    gcvt(l, n, str);
    printf("dNum= %lf \n", dNum);
    printf("String = %s \n", str);
}