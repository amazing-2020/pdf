#include <stdio.h>
#define gallonToLiter 3.785
#define mileToKilometer 1.609

int main(void)
{
    double  mileage = 0,  gasoline = 0;

    printf("Please enter mileage and the amount of gas you travel: ");
    scanf("%lf %lf", &mileage, &gasoline);
    printf("%.1lf mile/gallon \n", mileage/gasoline);
    printf("%lfKM, %lfL \n", mileage*mileToKilometer, gasoline*gallonToLiter);
    printf("USA-%lf L/100KM, EU-%lf L/100KM \n", 100/((mileage*mileToKilometer)/(gasoline*gallonToLiter)), (gasoline*gallonToLiter)/(mileage*mileToKilometer)*100);

    return 0;
}
/*34.4*mileToKilometer/gallonToLiter*/
/**
 * 结果存在很多问题
 * 已经有了乘法的部分必须用括号扩起来
*/