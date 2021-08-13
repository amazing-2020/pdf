#include <stdio.h>

int main(void) {
    char c;
    printf("Please enter a letter. \n");
    scanf("%c", &c);
    if ((c>='A' && c<='Z') || (c>='a' && c<='z')) {
        if (c=='A'||c=='E'||c=='I'||c =='O'||c=='U'||c=='a'||c=='e'||c=='i'||c =='o'||c=='u') {
            printf("%c is a vowell \n",c);
        } else {
            printf("%c is a consonant \n",c);
        }
    } else {
        printf("Error input. \n");
    }

    return 0;
}