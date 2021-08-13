#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char msg[1000];
    FILE *stream;
    int i=0;
    if ((stream = fopen("./code_case_249_c.txt", "w")) == NULL) {
        perror("fail to write! \n");
        exit(1);
    }
    scanf("%s", msg);
    while (msg[i]) {
        fputc(msg[i], stream);
        i++;
    }
    
    return 0;
}