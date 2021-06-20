#include <stdio.h>
int main(void) {
    double d;
    int Base_money=100000;
    float res=0.0;
    int flag;
    scanf("%lf", &d);
    flag = (int)(d/Base_money);//取商得到以100000=Base_money为基数的值
    flag = flag>10 ? 10:flag;
    switch (flag)
    {
    case 10:
        res += (d-10*Base_money)*0.01;//高于10*Base_money的部分奖金
        d = 10*Base_money;//为下一次case时计算res作准备，剩余部分奖金
    case 9:
    case 8:
    case 7:
    case 6:
        res += (d-6*Base_money)*0.015;
        d = 6*Base_money;
    case 5:
    case 4:
        res += (d-4*Base_money)*0.03;
        d = 4*Base_money;
    case 3:
    case 2:
        res += (d-2*Base_money)*0.05;
        d = 2*Base_money;
    case 1:
        res += (d-1*Base_money)*0.075;
        d = 1*Base_money;
    case 0:
        res += d*0.1;
        break;
    }

    printf("%.2f \n", res);

    return 0;
}

//利用了switch击穿现象