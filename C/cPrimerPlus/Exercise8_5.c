#include <stdio.h>
int main(void)
{
    int array[30] = { 10, 12, 15, 45, 56, 78, 89, 102, 103, 106, 110, 112, 120, 130, 150, 160, 188, 199, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290};
    int high = 30, low = 0;
    int mid = (low + high)/2;
    int factor = 120;
    int t;

    printf("Pick an integer from 1 to 100, i will try to guess it. \n");
    printf("Respond with a y if guess is right and with an n if it is wrong. \n");
    printf("Uh..., is your number %d \n", array[mid]);
    while (array[mid] != factor)
    {
        printf("%d %d \n", low, high);
        mid = (low + high)/2;
        printf("If my number is bigger(1) , else it is smaller(0): ");
        scanf("%d", &t);
        if (t)
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low + high)/2;
        printf("Well, then is it %d \n", array[mid]);
        if (low > high)
        {
            printf("Can't find it! \n");
            break;
        }
        if (mid == high || mid == low)
        {
            printf("%d", array[mid]);
        }
        while (getchar() != '\n')
            continue;
    }

    printf("I knew I could do it! \n");
    
    return 0;
}