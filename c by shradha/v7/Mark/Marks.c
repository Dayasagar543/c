#include <stdio.h>
int main()
{
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("please enter the values you want to insert inot the  array\n");
        scanf("%d", &marks[i]);
    }

    printf("printing the  values again\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", marks[i]);
    }
    return 0;
}