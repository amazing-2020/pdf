#include <stdio.h>

int main(void) {
    char s[1000], i;
    printf("Enter string: ");

    scanf("%s", s);
    for (i=0; s[i] != '\0'; ++i);
    printf("String length: %d", i);

    return 0;
}