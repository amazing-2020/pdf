#include <stdio.h>
#define STOP '#'
int main(void)
{
    const char exclamationMark = '!';

    int numbers = 0, i;
    char ch[100], character;
    
    while ((character = getchar()) != STOP && i < 100)
    {
        switch (character)
        {
        case '.': ch[i] = exclamationMark;
                  numbers++;
                  i++;            
                  break;
        case '!': ch[i] = character;
                  ch[i+1] = exclamationMark;
                  numbers++;
                  i += 2;
                  break;
        default:  ch[i] = character;
                  i++;
                  break;
        }
    }
    printf("%s \n", ch);
    printf("%d \n", numbers);

    return 0;
}//无法处理空白字符;