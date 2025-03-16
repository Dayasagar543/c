#include <stdio.h>
int main()
{
    int side;
    printf("input the side of the square to know the square of it:\n");
    scanf("%d", &side);
    int Area = side * side;
    printf("the squre of the input number is : %d", Area);
    return 0;
}