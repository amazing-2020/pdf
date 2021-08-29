#include <stdio.h>

int main()
{
    int a[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    int *begin, *end;
    int temp, i;
    
    for ( i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");
    begin = &a[0];
    end = &a[9];
    while (end > begin)
    {
        temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
    for ( i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}