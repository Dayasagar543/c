#include <stdio.h>
int main()
{
    int n, sum = 0, i = 1;
    printf("please enter a number to find the sum of n natural number till the number:\t");
    scanf("%d", &n);

    // while (i <= n)
    // {
    //     sum += i;
    //     i++;
    // }

    for (int i = n; i > 0; i--)
    {
        printf("%d\n", i);
        sum = sum + i;
    }

    printf("The sum of all the values %d\n", sum);
    return 0;
}