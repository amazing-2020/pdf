#include <stdio.h>

int main(void) {
    char str1[100], str2[100];
    scanf("%[^a-z]", str1);
    printf("%s \n", str1);
    scanf("%[a-z A-B 0-9]", str2);
    printf("%s \n", str2);
    return 0;
}