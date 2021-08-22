#include <stdio.h>
#define SLEN 40
#define LIM 5
#define STLEN 81
void arrchar(void);
void p_and_s(void);
void getsputs(void);
int main(void)
{
    arrchar();
    p_and_s();
    getsputs();

    return 0;
}

void arrchar(void)
{
    const char *mytalents[LIM] = {
        "Adding numbers swifly",
        "Multiplying accerately", "Srashing data",
        "Folowing instructions to the letter",
        "Understand the C language"
    };
    char yourtalents[LIM][SLEN] = {
        "Wallking in astraight line",
        "Sleeping", "Watching television",
        "Mailing letters", "Reading email"
    };
    int i;

    puts("Let's compare talents.");
    printf("%-36s %-25s \n", "My talents", "Your talents");
    for (i = 0; i < LIM; i++)
        printf("%-36s %-25s \n", mytalents[i], yourtalents[i]);
    printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd \n", sizeof(mytalents), sizeof(yourtalents));
}

void p_and_s(void)
{
    const char * mesg = "Don't be a fool!";
    const char * copy;

    copy = mesg;
    printf("%s \n", copy);
    printf("mesg = %s, &mesg = %p, value = %p \n", mesg, &mesg, mesg);
    printf("copy = %s, &copy = %p, value = %p \n", copy, &copy, copy);
}
void getsputs(void)
{
    char word[STLEN];

    puts("Enter a string, please.");
    gets(word);
    printf("Your string twice: \n");
    printf("%s \n", word);
    puts(word);
    puts("Done.");
}