#include <stdio.h>

int main(void) {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int even[10], odd[10];
    int loop, e, d;

    e = d = 0;

    for (loop=0; loop<10; loop++) {
        if (arr[loop] %2 == 0) {
            even[e] = arr[loop];
            e+=2;
        } else {
            odd[d] = arr[loop];
            d+=2;
        }
    }

    printf("Orginal array: ");

    for (loop=0; loop<10; loop++) {
        printf("%d ", arr[loop]);
    }
    printf("\n Even: ");
    for (loop=0; loop<10; loop++) {
        printf("%d ", even[loop]);
    }
    printf("\n Odd: ");
    for (loop=0; loop<10; loop++) {
        printf("%d ", odd[loop]);
    }

    return 0;
}

/*Output:
  Orginal array: 0 1 2 3 4 5 6 7 8 9 
  Even: 0 0 2 0 4 0 6 32767 8 0 
  Odd: 1 0 3 0 5 0 7 0 9 0
 */