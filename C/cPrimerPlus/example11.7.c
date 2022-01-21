#include <stdio.h>
#define STLEN1 14
#define STLEN2_3 10
void fgets1();
void fgets2();
void fgets3();
int main(void)
{
    puts("1----------------");
    fgets1();
    puts("2----------------");
    fgets2();
    puts("3----------------");
    fgets3();

    return 0;
}

void fgets1()
{
    char words[STLEN1];

    puts("Enter a string, please.");
    fgets(words, STLEN1, stdin);
    printf("Your string twice (puts(), then fputs()): \n");
    puts(words);
    fputs(words, stdout);
    puts("Enter another string, please.");
    fgets(words, STLEN1, stdin);
    printf("Your string twice (puts(), then fputs()): \n");
    puts(words);
    fputs(words, stdout);
    puts("Done!");
}

void fgets2()
{
    char words[STLEN2_3];

    puts("Enter strings (empty lines to quit): ");
    while (fgets(words, STLEN2_3, stdin) != NULL && words[0] != '\n')
        fputs(words, stdout);
    puts("Done!");
}

void fgets3()
{
    char words[STLEN2_3];
    int i;

    puts("Enter strings (empty lines to quit): ");
    while (fgets(words, STLEN2_3, stdin) != NULL && words[0] != '\n')
    {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0')//Tranverse string
            i++;
        if (words[i] == '\n')
            words[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
        puts(words);
    }
    puts("Done!");
}