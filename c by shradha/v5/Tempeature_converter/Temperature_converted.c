#include <stdio.h>
void temperature_cel_far_conveter(float celsius);
int main()
{
    float celsius;
    printf("please input the celsius temperature to convert into farenite\n");
    scanf("%f", &celsius);
    temperature_cel_far_conveter(5);

    return 0;
}

void temperature_cel_far_conveter(float celsius)
{
    float farenite = (celsius * 9 / 5) + 32;
    printf("the farenite temperature is %f F", farenite);
}