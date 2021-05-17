#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
#include <ctype.h>

int main(void) {
    char cLetter;
    int iInRange, iCheck, i, iLetter;
    i=1;
    while (i) {
        printf("Enter a letter, if you want to exit, please enter \"0\" \n");
        scanf("%c", &cLetter);
        getchar();
        printf("__________________________-_______________-- \n");
        iLetter = (int)cLetter;
        iCheck = isalpha(iLetter);
        if (iCheck) {
            iInRange = (cLetter == 'a')|| (cLetter == 'e')||(cLetter == 'i')|| (cLetter == 'o')||(cLetter == 'u')||
            (cLetter == 'A')||(cLetter == 'E')||(cLetter == 'I')||(cLetter == 'O')||(cLetter == 'U');
            if (iInRange) {
                printf("The letter %c is a vowell. \n");
                printf("------------------------ \n");
                continue;
            } else {
                printf("The letter %c is a consonant. \n");
                printf("----------------------- \n");
                continue;
            }
        } else if (iCheck == 0) {
            if (iLetter != 48) {
                printf("Error input");
                printf("--------------------");
                continue;
            } else if ((int)cLetter == 48) {
                printf("Bye bye---- \n");
                printf("----------------------- \n");
                i = (int)cLetter - 48;
            }
        }
    }
    
    return 0;
}