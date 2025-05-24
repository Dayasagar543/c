#include <stdio.h>
void reverse_array(int array[], int n);
int swap(int *a, int *b);
void print_array(int array[], int size);
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    print_array(array, 6);
    printf("reversed array\n");
    reverse_array(array, 6);
    print_array(array, 6);
    return 0;
}
void reverse_array(int array[], int n)
{
    for (int i = 0; i <= (n / 2); i++)
    {
        swap(&array[i], &array[n - i - 1]);
    }
}
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}