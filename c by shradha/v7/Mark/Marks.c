#include <stdio.h>
int main()
{//inserting the marks into the array
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("please enter the values you want to insert into the  array\n");
        scanf("%d", &marks[i]);
    }

    //printing the numbers from the array
    printf("printing the  values again\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", marks[i]);
    }
    return 0;
}