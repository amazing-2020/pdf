#include <stdio.h>
#include <string.h>

union Data
{
    int i;
    float f;
    char str[20];
};
int main()
{
    union Data data;

    data.i = 10;
    printf("%d \n", data.i);

    data.f = 220.2;
    printf("%f \n", data.f);

    strcpy(data.str, "C program");
    printf("%s \n", data.str);

    return 0;
}