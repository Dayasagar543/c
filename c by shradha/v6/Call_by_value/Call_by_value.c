#include <stdio.h>
void square(int num);

int main()
{
    int num = 4;
    square(num);
    printf("the number is  %d \n", num);
    return 0;
}

void square(int num)
{
    num *= num;
    printf("the result is  %d \n", num);
}