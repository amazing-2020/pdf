#include <stdio.h>

typedef struct complex
{
    float real;
    float imag;
} complex;
//typedef struct complex complex;

complex add(complex n1, complex n2);

int main(void) {
    complex n1, n2, temp;
    printf("The first plural: \n");
    printf("Input real and imaginary parts: \n");
    scanf("%f %f", &n1.real, &n1.imag);
    
    printf("The second plural: \n");
    printf("Input real and imaginary parts: \n");
    scanf("%f %f", &n2.real, &n2.imag);

    temp = add(n1, n2);
    printf("Sum = %.1f + %.1fi \n", temp.real, temp.imag);

    return 0;
}

complex add(complex n1, complex n2) {
    complex temp;

    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;

    return (temp);
}