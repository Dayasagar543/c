#include <stdio.h>
int main()
{
    int number, factorial = 1;
    printf("input the number to find the factorial\n");
    scanf("%d", &number);
    for (int i = number; i > 0; i--)
    {
        factorial = factorial * i;
    }
    printf("%d\n", factorial);

    printf("The factorial of the number is %d \n ", factorial);
    return 0;
}