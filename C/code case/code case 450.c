#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp = NULL;
    char filename[25];
    char ch;

    printf("Please ener the name that you'd like to storage your input: ");
    scanf("%s", filename);
    if ((fp = fopen(filename, "w")) == NULL)
    {
        printf("error: cannot open file %s! \n", filename);
        exit(1);
    }
    printf("Now you can enter some text(End with '#'): ");
    getchar();// remove the '\n'
    while ((ch = getchar())!= '#')
        fputc(ch, fp);
    fclose(fp);

    return 0;
}
//cannot new a file!!!