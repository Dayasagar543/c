#include <stdio.h>
void CalculatePrice(float price);

int main()
{
    float price;
    printf("please enter the price  \n");
    scanf("%f", &price);
    CalculatePrice(price);
    return 0;
}
void CalculatePrice(float price)
{
    float total_price = price + (0.18 * price);
    printf("the price of the product is %f", total_price);
}