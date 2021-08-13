#include <stdio.h>

typedef struct 
{
    char name[20];
    float maxnum;
    float minnum;
} stu;

void Average(stu * s)
{
    printf("%f \n", (s->maxnum + s->minnum)/2);
    s->maxnum = 50;
    s->minnum = 0;
}

int main()
{
    stu s1 = {"zhangsan", 100, 50};
    Average(&s1);
    printf("%f \n", (s1.maxnum + s1.minnum)/2);

    return 0;
}
