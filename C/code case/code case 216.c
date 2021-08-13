#include <stdio.h>

void reverseStr(char * str);
int main(void) {
    char str[30];
    printf("Please enter a string: ");
    scanf("%s", str);
    printf("The string before flipping: %s", str);
    printf("\n");
    reverseStr(str);
    printf("\n");

    return 0;
}
void reverseStr(char * str) {
    if (*str=='\0') return;
    reverseStr(str+1);
    printf("%c ", *str);
}