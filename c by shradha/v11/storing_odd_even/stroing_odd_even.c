#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    printf("storing the odd numbers in the array\n");
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    printf("printing the odd values \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }
    printf("printing after the reallocation");
    ptr = realloc(ptr, 6);
    printf("storing the even numbers in the array\n");
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;

    printf("printing the even values \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);

    return 0;
}