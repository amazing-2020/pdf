#include <stdio.h>
#define onionPrice 2.05
#define beetPrice 1.15
#define carrotPrice 1.09
#define discountedPrice 100
#define WEIGHT1 5
#define WEIGHT2 20
#define unitFreight 0.5
int main(void)
{
    char vegetable;
    double o_weight, b_weight, c_weight, grossWeight;
    double discount = 0, vegetablePrice, packagingFee, totalPrice;

    printf("** Please choose the factor: onion: a, beet: b, carrot: c, quit: q **:\n");
    while ((vegetable = getchar()) != 'q')
    {   
        switch (vegetable)
        {
            case 'a': printf("Please enter the weight of onion: ");
                      scanf("%lf", &o_weight);
                      break;
            case 'b': printf("Please enter the weight of beet: ");
                      scanf("%lf", &b_weight);
                      break;
            case 'c': printf("Please enter the weight of carrot: ");
                      scanf("%lf", &c_weight);
                      break;
            default: break;
        }        
        printf("** Please choose the factor: onion: a, beet: b, carrot: c, quit: q **:\n");
        while (getchar() != '\n')
            continue;
    }
    grossWeight = o_weight + b_weight + c_weight;
    if (grossWeight <= WEIGHT1)
        packagingFee = 6.5;
    else if (grossWeight <= WEIGHT2)
        packagingFee = 14;
    else
        packagingFee = 14 + (grossWeight - WEIGHT2) * 0.5;
    
    vegetablePrice = o_weight * onionPrice + b_weight * beetPrice + c_weight * carrotPrice;
    totalPrice = vegetablePrice + packagingFee;

    if (vegetable >= 100)
    {
        discount = 0.05 * vegetablePrice;
    }
    
    printf("The price of onion: $%f/pound, beet: $%f/pound, carrot: $%f/pound \n", onionPrice, beetPrice, carrotPrice);
    printf("The gross weight: %0.2lf, totalPrice: %0.4lf, packagingFee: %0.2lf, the end price: %0.4lf \n", grossWeight, totalPrice, packagingFee, totalPrice  - discount);
    if (discount)
        printf("The discount: %0.4lf \n", discount);

    return 0;
}