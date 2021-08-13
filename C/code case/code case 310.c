#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *get_number(int all)
{
    int *temp_number = NULL;

    temp_number = (int *)malloc((all + 1) * sizeof(int));
    if ( temp_number == NULL)
    {
        fprintf(stderr, "temp_number malloc error. \n");
        return NULL;
    }
    memset(temp_number, 0, (all+1)*sizeof(int));
    return temp_number;
}

void free_number(int *number)
{
    if (number == NULL)
    {
        exit(0);
    }
    free(number);
    number = NULL;
    exit(0);
}

int main()
{
    int all = 0, num = 0;
    int count = 0;
    int s = 0;
    int *number = NULL;
    printf("Please input: \n");
    scanf("%d %d", &num, &all);
    number = get_number(all);

    for ( count = 0;  count < all; count++)
    {
        number[count] += num;
        s += number[count];
        number[count+1] = number[count]*10;
    }
    number[all] = '\0';

    for ( count = 0;  count < all; count++)
    {
        printf("%d + ", number[count]);
    }
    printf("%d = %d \n", number[count], s);
    free_number(number);
    
    return 0;
}