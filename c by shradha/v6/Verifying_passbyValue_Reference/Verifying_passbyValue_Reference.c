#include <stdio.h>
void printing_value(int num);
void printing_value1(int *num);
int main()
{
    int a = 4;
    printf(" the address of the variable in the main function   %p\n", &a);
    printing_value(a);
    printing_value1(&a);

    return 0;
}
void printing_value(int num)
{
    printf(" the address of the variable in the  function   %p \n", &num);
}
void printing_value1(int *num)
{
    printf(" the address of the variable in the  function1   %p \n", num);
}