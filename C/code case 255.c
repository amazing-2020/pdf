#include <stdio.h>

int main(void) {
    int i=1;
    int size=30;
    int b=1;
    int flag[30];
    for (int j=0; j<30; j++) {
        flag[j] = 0;
    }
    int num[30];
    for (int j=0; j<30; j++) {
        num[j] = j+1;
    }

    while (size>15) {
        if (i==31) {
            i=1;
        }
        if (b==10) {
            b=1;
        }
        if (flag[i] == 1) {
            b--;
        }
        if (b==9) {
            flag[i]=1;
            printf("%d \n", num[i-1]);
            size--;
        }
        i++;
        b++;
    }
    
    return 0;
}