#include <stdio.h>
void reverseSentence();

int main(void) {
    printf("Enter a string: ");
    reverseSentence();
    printf("\n");

    return 0;
}

void reverseSentence() {
    char c;
    scanf("%c", &c);

    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}//递归