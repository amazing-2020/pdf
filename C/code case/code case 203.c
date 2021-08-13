#include <stdio.h>

int main(void) {
    char operator;
    double firstNumber, secondNumber;

    printf("Input operator:(+, -, *, /):");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &firstNumber, &secondNumber);

    switch (operator) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", firstNumber, secondNumber, firstNumber+secondNumber);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", firstNumber, secondNumber, firstNumber-secondNumber);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", firstNumber, secondNumber, firstNumber*secondNumber);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", firstNumber, secondNumber, firstNumber/secondNumber);
        break;
    default:
        break;
    }
    printf("\n");
    
    return 0;
}