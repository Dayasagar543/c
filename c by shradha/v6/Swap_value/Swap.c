#include <stdio.h>
void swap(int a, int b);
int main()
{
    int x = 3, y = 4;
    swap(x, y);
    printf("x is %d \n", x);
    printf("y is %d \n", y);

    return 0;
}
void swap(int a, int b)
{
    int c = a;
    a = b;
    b = c;
    printf(" the swapped value is a is %d \n", a);
    printf(" the swapped value is b is %d \n", b);
}