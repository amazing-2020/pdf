#include <stdio.h>
#include <stdlib.h>
#define N 2
struct stu {
    char name[10];
    int num;
    int age;
    float score;
} boya[N], boyb[N], *pa, *pb;

int main() {
    FILE *fp;
    int i;
    pa = boya;
    pb = boyb;
    if ((fp=fopen("/home/turing/test.txt", "wt+")) == NULL) {
        puts("Failed");
        exit(0);
    }

    printf("inout data: \n");
    for (i=0;i<N; i++, pa++) {
        scanf("%s %d %d %f", pa->name, &pa->num, &pa->age, &pa->score);
    }
    pa = boya;
    for (i=0; i<N; i++, pa++) {
        fprintf(fp,"%s %d %d %f\n", pa->name, pa->num, pa->age, pa->score);
    }
    rewind(fp);
    for (i=0; i<N; i++, pb++) {
        fscanf(fp,"%s %d %d %f", pb->name, &pb->num, &pb->age, &pb->score);
    }
    pb = boyb;
    for (i=0; i<N; i++, pb++) {
        printf("%s  %d  %d  %f \n", pb->name, pb->num, pb->age, pb->score);
    }

    fclose(fp);

    return 0;
}
