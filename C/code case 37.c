#include <stdio.h>
#define MAXAULT 100
#define MAXTITL 100

struct book
{
    char title[MAXTITL];
    char auther[MAXTITL];
    float value;
};

int main()
{
    struct book s1 = 
    {
        "yuwen",
        "sfjkjdskjfklsd",
        56.3
    };

    printf("%s %f \n", s1.title,s1.value);

    return 0;
}