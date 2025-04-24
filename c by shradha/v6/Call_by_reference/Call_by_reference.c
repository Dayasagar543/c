#include <stdio.h>
void square(int *num);

int main()
{
    int number = 5;
    int *ptr = &number;
    printf("the value in the address before manipulation %d ", *ptr);
    square(ptr);
    printf(" the value in the address after the manipulation %d", *ptr);
    return 0;
}

void square(int *num)
{
    *num *= (*num);
    printf("the square of the number is %d\n", *num);
}