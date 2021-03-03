#include <stdio.h>
#define MAXTITL 100
#define MAXAULT 100

typedef struct 
{
    char title[MAXTITL];
    char auther[MAXAULT];
    float value;
} book;

int main()
{
    book s1 = 
    {
        "yunwen",
        "sdsfajkljkl",
        456789.3
    };
    printf("%s %s %f \n", s1.title, s1.auther, s1.value);

    return 0;
}