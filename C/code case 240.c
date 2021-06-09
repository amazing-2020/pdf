#include <stdio.h>

int main(void) {
    char str[1000], ch;
    int i, frequency=0;

    printf("Enter string: ");
    fgets(str, (sizeof str/ sizeof str[0]), stdin);

    printf("Enter the character you want to find: ");
    scanf("%c", &ch);

    for (i=0; str[i] != '\0'; ++i) {
        if (str[i] == ch) {
            frequency++;
        }
    }
    printf("The number of occurrences of the character %c in the string is %d \n", ch, frequency);

    return 0;
}