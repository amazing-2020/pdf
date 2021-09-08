#include <stdio.h>
int main()
{
    int num[50], n, *p, j, loop, i, m, k;

    printf("Please enter the number of the people this loop: ");
    scanf("%d", &n);
    p = num;
    // *starting numbering these people
    for (j = 0; j < n; j++)
        *(p + j) = j + 1;
    i = 0, m = 0, k = 0;
    while (m < n - 1)
    {
        if (*(p + i) != 0)
            k++;
        if (k == 3)
        {
            k = 0;
            *(p + i) = 0;
            m++; //the one who leave
        }
        i++;// move the pointer
        if (i == n)//back to the p[0]
            i = 0;
    }
    printf("The number that are left: ");
    for (loop = 0; loop < n; loop++)
        if (num[loop] != 0)
            printf("%2d number \n", num[loop]);
    
    return 0;
}