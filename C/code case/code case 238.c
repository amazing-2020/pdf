#include <stdio.h>

int main(void) {
    char str1[100], str2[100], *p = str1, n=0;
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    while (*p++ != '\0');//Move the pointer to the end of str1
    --p;
    while (str2[n] != '\0') {
        *p++ = str2[n];
        ++n;
    }
    *p='\0';
    printf("The reslut is: \n %s \n", str1);
    
    return 0;
}