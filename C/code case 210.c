#include <stdio.h>

int  convertDecimalToOctal(int decimalNumber);
int main(void) {
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    printf("The decimal number %d is conerted to octal as %d \n", decimalNumber, 
    convertDecimalToOctal(decimalNumber));

    return 0;
}

int  convertDecimalToOctal(int decimalNumber) {
    int octalNumber = 0, i=1;

    while (decimalNumber != 0) {
        octalNumber += (decimalNumber%8) * i;
        decimalNumber /= 8;
        i*=10;
    }
    return octalNumber;
}