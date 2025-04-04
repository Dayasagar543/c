#include <stdio.h>
int main()
{
    int number;
    printf("input the number for printing the table in reverse : \t");
    scanf("%d", &number);

    for (int i = 10; i>0; i--)
    {
        printf("%d*%d = %d \n", number, i, number * i);
    }
    return 0;
}