#include <stdio.h>
#include <math.h>

long long convertOctalToDecimal(int octalNumber);
int main(void) {
    int octalNumber;

    printf("Enter an octal number: ");
    scanf("%d", &octalNumber);

    printf("The octal number %d is converted to decimal as %lld \n", octalNumber,
     convertOctalToDecimal(octalNumber));

    return 0;
}

long long convertOctalToDecimal(int octalNumber) {
    int decimalNumber = 0, i = 0;
    while (octalNumber != 0) {
        decimalNumber += (octalNumber%10) * pow(8, i);
        ++i;
        octalNumber /= 10;
    }

    i=1;

    return decimalNumber;
}