#include <stdio.h>
int main(void)
{
    char i, j, k;
    for (i='x'; i<='z'; i++) {
        for (j='x'; j<='z'; j++) {
            if (i != j) {
                for (k = 'x'; k<='z'; k++) {
                    if (i!=k && j!=k) {
                        if (i!='x' && k!='x' && k!='z') {
                            printf("The orfer is: a--%c \t b--%c \t c--%c \n", i, j, k);
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}