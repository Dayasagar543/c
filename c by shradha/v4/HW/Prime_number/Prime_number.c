#include <stdio.h>
int main()
{
    int number = 0;
    printf("enter a number to know wether its a prime or not\n");
    scanf("%d", &number);
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            printf("not a prime number\n");
            return 0;
        }
    }
    printf("prime number \n");

    return 1;
}