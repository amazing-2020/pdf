#include <stdio.h>

int main(void) {
    char s1[100], s2[100], i, j;

    printf("Enter the first string: ");
    scanf("%s", s1);

    printf("Enter the second string: ");
    scanf("%s", s2);

    for (i=0; s1[i] != '\0'; ++i);

    for (j=0; s2[j] != '\0'; ++j, ++i) {
        s1[i] = s2[j];
    }
    printf("%d %d \n", i, j);
    s1[i] = '\0';
    printf("After connection: %s \n", s1);

    return 0;
}