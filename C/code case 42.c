#include <stdio.h>
typedef struct
{
    char name[20];
    float maxscore;
    float midscore;
} stu;

int Average(const stu * s)
{
    return (s->maxscore + s->midscore)/2;
}
int main()
{
    stu s1 = {"ZhanSan", 100, 50};
    int average = Average(&s1);
    printf("%d \n", average);

    return 0;
}
