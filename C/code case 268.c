#include <stdio.h>
struct 
{
    unsigned int i: 4;
    unsigned int j: 7;
    unsigned int n: 6;
    int x: 12;
} num;

int main(void) {
    for (num.i=2; num.i<=12; num.i++) {
        if (168%num.i==0) {
            num.j = 168/num.i;
            if (num.i%2==0 && num.j%2==0) {
                num.n = (num.i+num.j)/2;
                num.x = num.n*num.n - 268;
                int n2 = (num.j-num.i)/2;
                printf("i = %d, x = %d , n = %d, %d\n", num.i, num.x, num.n, n2);
                printf("%lu \n", sizeof(num));
            }
        }
    }

    return 0;
}