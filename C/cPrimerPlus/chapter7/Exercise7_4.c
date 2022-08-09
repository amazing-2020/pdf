#include <stdio.h>
#define STOP '#'
int main(void)
{
    const char period = '.', exclamationMark = '!';

    int numbers = 0, i;
    char ch[100], character;
    
    while ((character = getchar()) != STOP && i < 100)
    {
        if (character == period)
        {
            ch[i] = exclamationMark;
            numbers++;
            i++;
        }
        else if (character == exclamationMark)
        {
            ch[i] = character;
            ch[i+1] = exclamationMark;
            numbers++;
            i += 2;
        }
        else 
        {
            ch[i] = character;
            i++;
        }
    }
    printf("%s \n", ch);
    printf("%d \n", numbers);

    return 0;
}