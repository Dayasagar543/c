#include <stdio.h>
#include <math.h>
int main()
{
    int base, power;
    printf(" please input the base\n");
    scanf("%d", &base);
    printf(" please input the  power \n");
    scanf("%d", &power);
    double Result = pow(base, power);
    printf("The result is : %f", Result);
    return 0;
}