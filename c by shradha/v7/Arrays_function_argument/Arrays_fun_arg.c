#include <stdio.h>
void printnumbers(int array[], int n);
void scannumbers(int array[], int n);
int main()
{
    // arrays as function argument
    int array[10];
    scannumbers(array, 10);
    printnumbers(array, 10);
    return 0;
}
void printnumbers(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
}
void scannumbers(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" enter the value to be stored  %d \n", i);
        scanf("%d", (array + i));
    }
}
