#include <stdio.h>
#include <math.h>

unsigned long long convertOctalToBinary(int octalNumber);
int main(void) {
    int octNumber;

    printf("Enter an octal number: ");;
    scanf("%d", &octNumber);

    printf("Octal number %d is converted to binary as %llu \n", octNumber, 
    convertOctalToBinary(octNumber));

    return 0;
}
unsigned long long convertOctalToBinary(int octalNumber) {
    int decimalNumber=0, i=0;
    unsigned long long binaryNumber=0;
    while (octalNumber!=0) {
        decimalNumber += (octalNumber%10) * pow(8, i);
        ++i;
        octalNumber/=10;
    }
    i=1;
    while (decimalNumber!=0) {
        binaryNumber += (decimalNumber%2) * i;
        decimalNumber /= 2;
        i *= 10;
    }
    
    return binaryNumber;
}
