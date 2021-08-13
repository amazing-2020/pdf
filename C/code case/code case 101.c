#include <stdio.h>
int main()
{
    FILE *fp;
    char str[] = "This is github.com.";
    fp = fopen("/home/turing/test_1.txt", "wt");
    fwrite(str, sizeof(str), 1, fp);
    fclose(fp);
//文件末尾有乱码
    return 0;
}