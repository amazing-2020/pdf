#include <stdio.h>

int main()
{
    char *message = "Hello world";
    printf("%s \n", message);
    while(*message != '\0')
    {
        printf("%c", *message++);
    }
    printf(" %c", *message);
    printf("\n");
    
    int copy = 1;
    int *pointer = &copy;
    int **pointer2th = &pointer;
    printf("%d \n", copy); 
    printf("%d \n", *pointer++);
    printf("%p \n", pointer);
    printf("%p \n", *pointer2th);

    return 0;
}