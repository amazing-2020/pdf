#include <stdio.h>
#define GRADE(x) (x>90)? 'A':((x>60)? 'B':'C')

int main() {
    int score;
    while (scanf("%d", &score)!=0)
    {
        printf("%c \n", GRADE(score));
        break;
    }
    
    return 0;
}