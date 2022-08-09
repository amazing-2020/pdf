#include <stdio.h>
#define MSG1 "I am a symbolic string content"
#define MAXLENGTH 81
#define MSG2 "I'm a special"
void strings1(void);
void strptr(void);
void addresses(void);
void test();

int main(void)
{
    strings1();
    strptr();
    addresses();
    //test();

    return 0;
}

void strings1(void)
{
    char word[MAXLENGTH] = "I am a string in an array";
    const char * pt1 = "Something is pointing at me";

    puts("Here are some strings: ");
    puts(MSG1);
    puts(word);
    puts(pt1);
    word[8] = 'p';
    puts(word);
}

void strptr(void)
{
    printf("%s, %p, %c \n", "We", "are", *"space farers");
}

void addresses(void)
{
    char ar[] = MSG2;
    const char *pt = MSG2;

    printf("address of \"I'm special\": %p \n", "I'm special");
    printf("            address ar: %p \n", ar);
    printf("            address pt: %p \n", pt);
    printf("          address MSG2: %p \n", MSG2);
    printf("address of \"I'm special\": %p \n", "I'm special");
}

void test()
{
    char * p1 = "Klingon"; // If you want to change it(like line 53), don't use the pointer.
    p1[0] = 'F';
    printf("Klingon");
    printf(": Beware the %ss \n", "Klingon");
}