#include <stdio.h>
int value_repeat(int array[], int n, int value);
int main()
{
    int array[] = {45, 453, 345, 34, 33, 33, 333, 44, 55, 33, 44, 55, 44, 33, 222, 22, 22, 11, 1, 11, 11, 1, 1, 1, 1, 22, 2, 3, 2};
    printf("The number of times the value %d is %d",44,value_repeat(array,30,44));
    return 0;
}
int value_repeat(int array[], int n, int value)
{
    int num_repeated = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == value)
        {
            num_repeated++;
        }
    }
    return num_repeated;
}