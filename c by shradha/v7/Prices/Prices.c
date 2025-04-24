#include <stdio.h>
int main()
{
    float prices[4];
    for (int i = 0; i < 4; i++)
    {
        printf("please input the price of the  %d item\n", i);
        scanf("%f", &prices[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf(" the price of the  %d item is %f \n", i, prices[i]);
    }
    return 0;
}