#include <stdio.h>
int main()
{
    int number;

    while (number % 7 != 0)
    {
        printf("please enter a number \n");
        scanf("%d", &number);
    }
    printf("thank you! \n");

    return 0;
}