#include <stdio.h>
#include <string.h>
void function2(void);
#define M1 "How are ya, sweetie? "
char M2[40] = "Beat The clock.";
char * M3 = "chat";
int main(void)
{
    char words[80];
    printf(M1);
    puts(M1);
    puts(M2);
    puts(M2 + 1);
    printf("**************\n");
    strcpy(words, M2);
    strcat(words, "Wina toy.");
    puts(words);
    words[4] = '\0';
    puts(words);
    while (*M3)
        puts(M3++);
    puts(--M3);
    puts(--M3);
    M3 = M1;
    puts(M3);
    printf("**************\n");
    function2();

    return 0;
}

void function2()
{
    char str[] = "gawsie";
    char str2 [] = "bletonism";
    char * ps;
    int i = 0;
    for (ps = str; *ps != '\0'; ps++)
    {
        if (*ps == 'a' || *ps == 's')
            putchar(*ps);
        else    
            (*ps)--;
        putchar(*ps);
    }   
    putchar('\n');
    while (str2[i] != '\0')
    {
        printf("%c", i % 3 ? str2[i]:'*');
        i++;
    }
    putchar('\n');
}