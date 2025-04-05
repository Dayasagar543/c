#include <stdio.h>
int Factorial(int n);
int main()
{
    int fact = Factorial(5);
    printf("%d", fact);
    return 0;
}
int Factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * Factorial(n - 1);
}