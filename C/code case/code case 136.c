#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
int a = 0;
char *p1;
int main()
{
    int b;
    char s[] = "abc";
    char *p2;
    char *p3 = "123456";
    static int c = 0;
    p1 = (char *)malloc(10);
    p1 = (char *)malloc(20);
//内存申请方式
    strcpy(p1, "Hello world");
    return 0;
}
*/

int *get_memory(int n)
{
    int *p, i;
    if(( p = (int *)malloc(n * sizeof(int))) == NULL)
    {
        printf("Molloc error.");
        return p;
    }
    memset(p, 0, n * sizeof(int));
    for (i = 0; i<n; i++)
    {
        p[i] = i+1;
    }
    return p;
}

int main(int argc, const char *argv[])
{
    int n, *p, i;
    printf("Please input.\n");
    scanf("%d", &n);
    if ((p = get_memory(n)) == NULL)
    {
        return 0;
    }
    for (i = 0; i<n; i++) 
    {
        printf("%d", p[i]);
    }
    printf("\n");
    free(p);
    p = NULL;
    return 0;
}