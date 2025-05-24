#include <stdio.h>
// void print_array(int array[], int size);

int main()
{
    int n;
    printf("please enter the n to get the fibonaccinumber n should >2: \n");
    scanf("%d", &n);
    int fibo_nums[n];
    fibo_nums[0] = 0;
    printf("%d\t", fibo_nums[0]);
    fibo_nums[1] = 1;
    printf("%d\t", fibo_nums[1]);

    for (int i = 2; i < n; i++)
    {

        fibo_nums[i] = fibo_nums[i - 1] + fibo_nums[i - 2];
        printf("%d \t", fibo_nums[i]);
    }

    return 0;
}
// void print_array(int array[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d\t", array[i])
//     }
// }