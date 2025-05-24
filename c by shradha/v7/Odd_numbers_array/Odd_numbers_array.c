#include <stdio.h>
int count_odds(int array[], int n);

int main()
{
    int array[] = {34, 54, 66, 55, 33, 22, 78};
    count_odds(array, 7);
    printf("%d\n", *(array + 2));
    printf("%d\n", *(array + 5));
    return 0;
}
int count_odds(int array[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 != 0)
        {
            count++;
        }
    }
    printf("the odd numbers in the arrays %d\n", count);
    return count;
}