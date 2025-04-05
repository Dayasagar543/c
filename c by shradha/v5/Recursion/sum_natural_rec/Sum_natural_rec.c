#include <stdio.h>
int sum_natural(int n);
int main()
{
    int sum = sum_natural(5);
    printf("the sum of the n natural numbers is  %d\n", sum);
    sum = sum_natural(10);
    printf("the sum of the n natural numbers is  %d\n", sum);
    sum = sum_natural(3);
    printf("the sum of the n natural numbers is  %d\n", sum);
    return 0;
}

int sum_natural(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + sum_natural(n - 1);
}