#include <stdio.h>
int main()
{
    // infinite loops can be created using different methods like for while etc
    int num = 1;
    // while (num == 1)
    // {
    //     printf("hi there \n");
    // }

    // while (1)
    // {
    //     printf("hi there \n");
    // }

    while (num != 10)
    {
        printf("%d \n", num);
        num++;
    }

    // do while syntax

    // do
    // {
    // printf("%d \n", num);
    // num++;
    // } while (num != 10);
    return 0;
}