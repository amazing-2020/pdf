#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 1024

int main(void) {
    char buf[MAX_LINE];
    FILE *fp;
    int len;
    if ((fp = fopen("code_case_249_c.txt", "r")) == NULL) {
        perror("fail to read");
        exit(1);
    }
    while (fgets(buf, MAX_LINE, fp) != NULL) {
        len = strlen(buf);
        buf[len] = '\0';
        printf("%s %d \n", buf, len);
    }
    
    return 0;
}