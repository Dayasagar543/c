#include <stdio.h>
int sum_digits_num(int n);
int main()
{
    int result = sum_digits_num(234);
    printf(" the sum of the digits %d", result);
}
int sum_digits_num(int number)
{

    int number_out, sum = 0;
    printf("input a number \n");
    scanf("%d", &number);
    while (number > 0)
    {
        number_out = number % 10;
        printf("%d \n", number_out);
        sum += number_out;
        number /= 10;
    }
    return sum;

    // int sum_digits=sum_digits+number%10
}