#include <stdio.h>
int main()
{

    // pointer arthematic opertions is we can only do + and - using this we can
    //  increase the size by that data type using increment or decrement operator.
    // we can also do the comparison too.
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);


    return 0;
}