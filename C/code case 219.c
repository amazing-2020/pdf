#include <stdio.h>
#include <stdlib.h>

#define SAFE_FREE(p) \
    free(p);         \
    p = NULL;        

int *reverseSentence();
int len;
int main(void) {
    int *p=NULL;
    printf("Enter an integer: ");
    p = reverseSentence();

    int sum=0;
    for (int i=0; i<len; i++) {
        sum += p[i];
    }
    printf("Array sum: %d \n", sum);

    SAFE_FREE(p);

    return 0;
}

int *reverseSentence() {
    static int sum, num;
    static int *p;
    int n;
    char c;
    scanf("%d%c", &n, &c);

    sum++;
    if (c!='\n') {
        reverseSentence();
    } else {
        p = malloc(sizeof(int) * sum);
    }
    num++;
    p[sum-num] = n;

    if (sum == num) {
        len = sum;
        printf("Integer array length: %d \n", len);
        sum = num = 0;
    }

    return p;
}