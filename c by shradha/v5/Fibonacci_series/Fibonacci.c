#include <stdio.h>
int Fibonacci_numbers();

int main()
{
    Fibonacci_numbers(10);
    return 0;
}
int Fibonacci_numbers(int number)
{
    int n1 = 0, n2 = 1;
    printf("%d \t %d \t", n1, n2);
    n1 = n2;
    printf("%d\t", n1);
    ;
    for (int i = 2; i <= number; i++)
    {
        int temp = n1 + n2;
        n1 = n2;
        n2 = temp;
        printf("%d\t ", n2);
    }
}
