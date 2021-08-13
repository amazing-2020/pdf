#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fpout;
    char ch;
    if ((fpout = fopen("/home/turing/test.txt", "a+"))==NULL)
    {
        printf("Error! \n");
        exit;
    }
    ch = getchar();
    for (;ch!='#';) 
    {
        fputc(ch, fpout);
        ch=getchar();
    }
    fclose(fpout);

    return 0;
}