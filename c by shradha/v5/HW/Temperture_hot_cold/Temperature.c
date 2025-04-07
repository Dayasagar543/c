#include <stdio.h>
void temperature_check(int temp);
int main()
{
    int input_temperature;
    printf("Please input the temperature , defaulty the temperature should be 22 \n");
    scanf("%d", &input_temperature);
    temperature_check(input_temperature);
    return 0;
}
void temperature_check(int temp)
{
    int room_temperature = 22;
    if (temp <= room_temperature)
    {
        printf("its cool,the temperature is low\n");
    }
    else
    {
        printf("its hot, the temperature is high \n");
    }
}