#include <stdio.h>
#include <stdlib.h>

void Q40()
{
    int n;
    int *array;
    printf("Please enter the number of the arrar elements: ");
    scanf("%d", &n);
    array = (int *)malloc(n * sizeof(int));
    printf("Please enter the array element: ");
    for (int i = 0; i < n; i++)
        scanf("%d", (array + i));
    printf("The reversed array is: ");
    for (int i = n-1; i >= 0; i--)
        printf("%d ", *(array + i));
    printf("\n");
    free(array);
}

int main(void)
{
    Q40();

    return 0;
}