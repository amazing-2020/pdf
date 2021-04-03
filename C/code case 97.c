#include <stdio.h>
#include <string.h>

int main()
{
    FILE *pfile = fopen("/home/turing/eclipse", "rb");
    if (pfile == NULL) {
        perror("Errors.! \n");
        return 0;
    }
    char buf[100] = {0};
    while (!feof(pfile)) {
        memset(buf, 0, sizeof(buf));
        size_t len = fread(buf, sizeof(char), sizeof(buf), pfile);
        printf("buf: %d, len: %d \n", buf, len);
    }
    fclose(pfile);
}