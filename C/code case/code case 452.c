#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM 200

int main(int argc, char const *argv[])
{
    FILE *a = NULL, *b = NULL, *c = NULL;
    char *str = NULL;

    a = (FILE *)fopen("code_case_248_c.txt", "r");
    b = (FILE *)fopen("code_case_249_c.txt", "r");
    c = (FILE *)fopen("code_case_452_c.txt", "w");
    if (a == NULL || b == NULL || c == NULL)
    {
        printf("error: cannot open the file!\n");
        return -1;
    }

    str = (char *)malloc(NUM * sizeof(char));
    fgets(str, 100, a);
    int i = 0;
    int length = (int)strlen(str) - 1;
    for (i = 0; i < length; i++)
        for (int j = i + 1; j < length; j++)
            if (*(str + i) > *(str + j))
            {
                char temp = *(str + i);
                *(str + i) = *(str + j);
                *(str + j) = temp;
            }
    if (fprintf(c, "%s", str) > 0)
        printf("Write the data succeeded!");
    else
        printf("Write the data failed!");
    free(str);
    fclose(a);
    fclose(b);
    fclose(c);

    return 0;
}
