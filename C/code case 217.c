#include <stdio.h>
#include <string.h>

int main(void) {
    char c[40];
    int i=1;
    printf("Enter a string: ");
    scanf("%s", c);
    int j=strlen(c);
    do {
        printf("%c", c[j-i]);
        ++i;
    }while (i<=j);
    printf("\n");
    
    return 0;
}