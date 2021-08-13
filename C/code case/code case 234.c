#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, num;
    float *data;

    printf("Enter the number of elements(1-100): \n");
    scanf("%d", &num);

    data = (float*)calloc(num, sizeof(float));

    if (data == NULL) {
        printf("Error!!");
        exit(0);
    }
    printf("\n");

    for (i=0; i<num; ++i) {
        printf("Input numbers %d: ", i+1);
        scanf("%f", data+i);
    }

    for (i=1; i<num; ++i) {
        if (*data < *(data+i)) {
            *data = *(data+i);
        }
    }

    printf("The biggest element: %.2f \n", *data);
    return 0;
}