#include <stdio.h>
#define DEF "Iam a #defined string."
void nono(void);
int main(void)
{
    char str1[80] = "An array was initialized to me.";
    const char * str2 = "An pointer was initialized to me.";

    puts("I'm an agument to puts().");
    puts(DEF);
    puts(str1);
    puts(str2);
    puts(&str1[5]);
    puts(str2 + 4);
    printf("-------------------- \n");
    nono();

    return 0;
}

void nono(void)
{
    char side_a[] = "Side_A";
    char dont[] = {'W', 'O', 'W', '!'};
    char side_b[] = "Side_B";

    puts(dont);
}