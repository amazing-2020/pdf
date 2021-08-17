#include <stdio.h>
void special(char letter)
{
    char letter2;

    printf("Enter the second letter: ");
    scanf("%*[^\n]");
    scanf("%*c");
    scanf("%c", &letter2);
    if (letter2 == 'u' && letter == 'T')
        printf("Today is Tueaday \n");
    else if (letter2 == 'u' && letter == 'S')
        printf("Today is Sunday \n");
    else if (letter2 == 'h')
        printf("Today is Thuesday \n");
    else if (letter2 == 'a')
        printf("Today is Saturday \n");
    else 
        printf("Error \n");
}

int main(void)
{
    char letter;
    printf("Please enter the first letter of the week(uppercase): ");
    scanf("%c", &letter);
    switch (letter)
    {
        case 'M': printf("Today is Monday \n");
                  break;
        case 'T': special(letter);
                  break;
        case 'W': printf("Today is Wendesday \n");
                  break;
        case 'F': printf("Today is Friday \n");
                  break;
        case 'S': special(letter);
        default: printf("Error \n");
                 break;
    }

    return 0;
}