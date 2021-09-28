#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *fa, *fb, *fc;
    int i, j, k;
    char str[100], str1[100];
    char tem;

    if ((fa = fopen("code_case_450_c.txt", "r")) == NULL)
    {
        printf("error: cannot open the file!\n");
        exit(1);
    }
    fgets(str, 200, fa);
    fclose(fa);
    if ((fb = fopen("code_case_249_c.txt", "r")) == NULL)
    {
        printf("error: cannot open the file! \n");
        exit(1);
    }
    fgets(str1, 200, fb);
    fclose(fb);
    strcat(str, str1);
    
    for (i = strlen(str) - 1; i > 1; i--)
        for (j = 0; j < i; j++)
            if (str[j] > str[j+1])
            {
                tem = str[j];
                str[j] = str[j+1];
                str[j+1] = tem;
            }
    
    if ((fc = fopen("code_case_451_c.txt", "w")) == NULL)
    {
        printf("error: cannot open the file! \n");
        exit(1);
    }
    fputs(str, fc);
    fclose(fc);
    
    return 0;
}
