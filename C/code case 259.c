#include <stdio.h>
#include <stdlib.h>

int b[4], arr[4];
int Count=0;
void DFS(int step) {
    if (step==5) {
        if (arr[1]!=arr[2] && arr[1]!=arr[3] && arr[2]!=arr[3]) {
            printf("%d  ", Count);
            Count=Count+1;
            printf("%d%d%d \n", arr[1], arr[2], arr[3]);
        }

        return ;
    }
    for (int i=1; i<=4; i++) {
        if (b[i]==0) {
            arr[step]=i;
            b[i]=1;
            DFS(step+1);
            b[i]=0;
        }
    }
    return ;
}

int main(void) {
    DFS(1);
    printf("There are %d species. \n", Count);
    return 0;
}