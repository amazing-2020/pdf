#include <stdio.h>
#include <stdlib.h>

struct man {
    char name[20];
    int age;
} person[3] = {"li", 30, "wang", 25, "sun", 22};

int main()
{
    struct man *q, *p;
    int i, m = 0, k = 0;
    q = p = person;
    for (i = 0; i < 3; i++)
    {
        if (m < p->age)
        {
            m = p->age;
            q = p;
            k = i;
        }
        p++;
    }
    for (; k < 3; k++)
        if (person[k].age >= m)/*'==' alse available*/
            printf("%s %d \n", person[k].name, person[k].age);

    return 0;
}