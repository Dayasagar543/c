#include <stdio.h>
#include <math.h>
int main()
{
    int number, power;
    printf("enter the number you want to square it\n");
    scanf("%d", &number);
    double powerR = pow(number, 2);
    printf("the square of the %d is  %f",number, powerR);
    return 0;
}
