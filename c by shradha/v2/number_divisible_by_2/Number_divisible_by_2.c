#include <stdio.h>
int main()
{
    int number;
    printf("enter a number is divisible by 2\n");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("the number is divisible by 2\n");
    }
    else
    {
        printf("the number is not divisible by 2\n");
    }

    return 0;
}