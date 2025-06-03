#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    // ptr[0] = 5;
    // ptr[1] = 10;
    // ptr[2] = 12;
    // ptr[3] = 42;
    // ptr[4] = 45;
    for (int i = 0; i < 5; i++)
    {
        printf("please enter the value you want to insert into array\n");
        scanf("%d\n", &ptr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    return 0;
}