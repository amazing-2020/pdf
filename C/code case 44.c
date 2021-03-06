#include <stdio.h>
typedef struct 
{
    char name[20];
    float maxname;
    float minname;
} stu;
stu Average(stu s)
{
    printf("%f \n", (s.maxname + s.minname)/2);
    s.minname = 0;
    s.maxname = 50;
    return s;
}
int main()
{
    stu s1 = {"zjkjkldsfds", 110, 50};
    stu s2 = Average(s1);
    printf("%f \n", (s2.maxname + s2.minname)/2);
    printf("%f \n", (s1.minname + s1.maxname)/2);

    return 0;
}
