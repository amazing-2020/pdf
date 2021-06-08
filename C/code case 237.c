#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[100], s2[100];
    printf("Enter the first string: ");
    scanf("%s", s1);

    printf("Enter the second string: ");
    scanf("%s", s2);

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (int i=0; i<=len2; i++) {
        s1[i+len1] = s2[i];
    }
    printf("%s \n", s1);

    return 0;
}