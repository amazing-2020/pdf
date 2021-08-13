#include <stdio.h>
#include <string.h>

int main(void) {
    int a=12021;
    char s[10] = {'\0'}, s1[10] = {'\0'};
    sprintf(s, "%d", a);
    int n=strlen(s);
    int j=0;
    for (int i=n-1; i>=0;  i--) {
        s1[j++] = s[i];
        printf("%2d", i);
    }

    printf("%s %s \n", s, s1);
    if (!strcmp(s, s1)) {//如果字符串的结果相同则返回0,！0 = 1
        printf("%d is oalinfrome number \n", a);
    } else {
        printf("%d is not oalinfrome number. \n", a);
    }

    return 0;
}