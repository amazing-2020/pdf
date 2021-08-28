#include <stdio.h>
#define judge(a, b) (a>b ? 1 : (a<b ? -1 : 0))
#define balance(x, a, b) (x>0 ? judge(a, b) : -1*judge(a, b))
#define PTSTR(type, str, n) {int i = 0; printf("Component: \n"); while(i < n) printf(#type"\t", str[i++]); printf("\n");}

#define MAX 11

int main()
{
    int n, a[MAX] = {1, 3, 5, 8, 15, 26, 35, 38, 40, 59};
    int b[MAX] = {99, 80, 66, 50, 39, 24, 16, 9, 3, 0};

    int sign = judge(a[9], a[0]);
    int i, j;

    PTSTR(%d, a, 10);
    if (sign != 0)
    {
        printf("Please enter a number to insert: ");
        scanf("%d", &n);
        if (balance(sign, n, a[0]) < 0) j = -1;
        else
        {
            for (i = 0, j = 0; i < MAX-1;i++)
                if (balance(sign, n, a[i] > 0)) j = i;
        }
        for (i = MAX; i > j+1; i--)
            a[i] = a[i-1];
        a[i] = n;
        PTSTR(%d, a, 11);
        while (getchar() != '\n') getchar();
    }
    else
        printf("Unable determine the order!\n");

    return 0;
}