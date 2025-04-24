#include <stdio.h>
void Arthematic_operations(int num1, int num2, int *sum, int *product, int *average);
int main()
{
    int sum = 0, product = 0, average = 0;
    printf("the sum is %d \n , the product is %d \n and the average %d \n", sum, product, average);
    Arthematic_operations(2, 3, &sum, &product, &average);
    printf("the sum is %d \n , the product is %d \n and the average %d \n", sum, product, average);
    return 0;
}
void Arthematic_operations(int num1, int num2, int *sum, int *product, int *average)
{
    *sum = num1 + num2;
    *product = num1 * num2;
    *average = (num1 + num2) / 2;
}