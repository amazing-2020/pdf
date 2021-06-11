#include <stdio.h>
#include <string.h>

int main(void) {
    int input_c;
    printf("Select function Function 1, please enter 1 or 2: ");
    scanf("%d", &input_c);
    if (input_c == 1)
    {
        char src[40];
        char dest[100];
        memset(dest, '\0', sizeof(dest));
        strcpy(src, "This is github.com");
        strcpy(dest, src);
        printf("Final target string: %s \n", dest);
    } else if (input_c == 2){
        char s1[100], s2[100], i;
        printf("String s1: ");
        scanf("%s", s1);

        for (i=0; s1[i] != '\0'; ++i) {
            s2[i] = s1[i];
        }
        s2[i] = '\0';
        printf("String s2: %s", s2);
    } else {
        printf("Without this function. \n");
    }
    

    return 0;
}