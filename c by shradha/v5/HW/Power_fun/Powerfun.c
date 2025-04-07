#include <stdio.h>
int power_fun(int base, int power);
int main()
{
    int number, power;
    printf("please input value for calculating the power , input the  base \n");
    scanf("%d", &number);
    printf("please input value for calculating the power , input the exponent: \n ");
    scanf("%d", &power);
    int result = power_fun(number, power);
    printf(" the result of the  base %d raised to %d is %d", number, power, result);

    return 0;
}

int power_fun(int base, int power)
{
    if (power == 1)
    {
        return base;
    }
    return base * power_fun(base, power - 1);
}