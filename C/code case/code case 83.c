#include <stdio.h>

int main()
{
    FILE *fp=NULL;
    char buff[255];

    fp = fopen("/home/turing/test.txt", "r");
    fscanf(fp, "%s", buff);
    printf("1: %s \n", buff);

    fgets(buff, 255, (FILE*)fp);
    printf("2: %s \n", buff);

    fgets(buff, 255, (FILE*)fp);
    printf("3: %s \n", buff);

    return 0;
}