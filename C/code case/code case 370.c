#include <stdio.h>
int main()
{
    char i, j;
    printf("Please enter the first string: ");
    scanf("%c", &i);
    getchar();
    switch(i)
    {
        case 'm': printf("Monday \n");
                  break;
        case 'w': printf("Wednesday \n");
                  break;
        case 'f': printf("Friday \n");
                  break;
        case 't': printf("Please enter the next letter: ");
                  scanf("%c", &j);
                  if (j == 'u') printf("Tuesday \n");
                  if (j == 'h') printf("Thuresday \n");
                  break;
        case 's': printf("Please enter the next letter: ");
                  scanf("%c", &j);
                  if (j == 'u') printf("Sunday \n");
                  if (j == 'a') printf("Saturday \n");
                  break;
        default : printf("Error! \n");
                  break;
    }

    return 0;
}
