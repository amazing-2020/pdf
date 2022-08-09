#include <stdio.h>
#include <inttypes.h>

void altnames();
int main(void)
{
    char ch;
    printf("Please enter a character. \n");
    scanf("%c", &ch);
    printf("The code for %c is %d. \n", ch, ch);
    altnames();

    return 0;
}

void altnames()
{
    int32_t me32;
    
    me32 = 45933945;
    printf("first, assume int_32 is int: ");
    printf("m32 = %d \n", me32);
    printf("Next, let's not make any assumptions. \n");
    printf("Instead, use a \"macro\" from inttypes.h \n");
    printf("me32 = %" PRId32 " \n", me32);
}