#include <stdio.h>

int get_option();
void print_result(int num1, int num2, int reslult, int option);

int main(void) {
    int done=0;
    int option, num1, num2, result;

    while (!done) {
        option = get_option();
        if (option==0) {
            done=1;
        } else {
            do {
                printf("\n Please enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                if (option==4&&num2==0) {
                    printf("Sorry, the divisor cannot be zero! \n");
                } else {
                    switch (option)
                    {
                    case 1:
                        result = num1 + num2;
                        break;
                    case 2:
                        result = num1 - num2;
                        break;
                    case 3:
                        result = num1 * num2;
                        break;
                    case 4:
                        result = num1 / num2;
                        break;
                    default:
                        break;
                    }
                    print_result(num1, num2, result, option);
                }
            } while (option == 4 && num2 == 0);  
        }
    }

    return 0;
}

int get_option() {
    int option;
    do
    {
        printf("\n ***************** ");
        printf("\n ****** 1.add ""\n ****** 2.subtraction "
        "\n ****** 3.multltiplication " "\n ****** 4.duvision "
        "\n ****** 0.exit ");
        printf("\n Please enter the function you need. \n");
        if ((scanf("%d", &option))==1 && (option<1 || option>5)) {
            printf("Error input. \n");
        }
    } while (option<1 || option>5);
    return option;
}

void print_result(int num1, int num2, int reslult, int option) {
    char operator;
    switch (option)
    {
    case 1:
        operator = '+';
        break;
    case 2:
        operator = '-';
        break;
    case 3:
        operator = '*';
        break;
    case 4:
        operator = '/';
        break;
    default:
        break;
    }
    printf("\n ** %d %c %d = %d ** \n", num1, operator, num2, reslult);
}//Error output