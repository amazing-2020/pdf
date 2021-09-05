#include <stdio.h>
void sort(int * a, int * b, int * c)
{
    int max, min, temp;

    max = *a > *b ? (*a > *c ? *a:*c) : (*b > *c ? *b:*c);
    min = *a < *b ? (*a < *c ? *a:*c) : (*b < *c ? *b:*c);
    temp = *a + *b + *c - max - min;
    printf("%d %d %d \n", min, temp, max);
}

int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("Enter a b c: ");
    scanf("%d %d %d", &a, &b, &c);
    sort( &a, &b, &c);
    
    return 0;
}
