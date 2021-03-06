#include <stdio.h>

typedef struct 
{
    char name[20];
    float maxscore;
    float midscore;
} stu;
int Average(stu s)
{
    return (s.maxscore + s.midscore)/2;
}
int main()
{
    stu s1 = {"zhangsan", 110, 256};
    float average = Average(s1);
    printf("%f \n", average);

    return 0;
}