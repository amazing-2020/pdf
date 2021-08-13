#include <stdio.h>
#include <string.h>

char * reverseStr(char * str);
int main(void) {
    char str[30];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("The string before flipping is: %s \n", str);
    printf("The string after flipping is: %s \n", reverseStr(str));

    return 0;
}
char * reverseStr(char * str) {
    int i=0;
    int j=strlen(str)-1;
    char temp;
    while (i<j) {
        temp=*(str+i);
        *(str+i)=*(str+j);
        *(str+j)=temp;
        i++;
        j--;
    }

    return str;
}