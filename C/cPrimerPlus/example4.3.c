#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40];

    printf("what's your name? ");
    scanf("%s", name);
    printf("hello %s. %s \n", name, PRAISE);
    printf("Yuor name of %zd letters occupies %zd memory cells. \n", strlen(name), sizeof(name));
    printf("The parse of praise has %zd letters.", strlen(PRAISE));
    printf("and occupies %zd memory cells. \n", sizeof PRAISE);
    
    return 0;
}