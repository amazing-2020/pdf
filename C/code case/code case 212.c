#include <stdio.h>
#include <math.h>

int convertBinarytoOctal(long long binaryNumber);
int main(void) {
    long long binaryNumber;

    printf("Enter an binary number: ");
    scanf("%lld", &binaryNumber);

    printf("binary number %lld is converted to octal as %d \n", binaryNumber,
    convertBinarytoOctal(binaryNumber));

    return 0;
}

int convertBinarytoOctal(long long binaryNumber) {
    int octalNumber=0, decimalNumber=0, i=0;

    while (binaryNumber !=0) {
        decimalNumber += (binaryNumber%10) * pow(2, i);
        ++i;
        binaryNumber /= 10;
    }//先转化为十进制数
    
    i=1;
    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}