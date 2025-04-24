#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int x = 5, y = 10;
    printf("the value of x is %d and the value of y is %d\n", x, y);
    swap(&x, &y);
    printf("the value of x is %d and the value of y is %d\n", x, y);
    return 0;
}

// call by reference
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("the value of a is %d and the value of b is %d\n", *a, *b);
}