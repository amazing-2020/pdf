#include <stdio.h>
int main()
{
    char a[] = "i am a student";
    char b[168];
    int i=0;

    for (i=0; *(a+i) != '\0'; i++)
    {
        *(b + i) = *(a + i);
    }
    
    printf("I = %d \n", i);
    b[i] = '\0';
    printf("%s \n", a);
    printf("%s \n", b);

    return 0;
}