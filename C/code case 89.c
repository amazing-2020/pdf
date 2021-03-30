#include <stdio.h>
int main()
{
    int a, b, sum;
    fprintf(stdout, "Input two numbers \n");
    fscanf(stdin, "%d %d", &a, &b);
    sum = a + b;
    fprintf(stdout, "sum=%d", sum);

    return 0;
}