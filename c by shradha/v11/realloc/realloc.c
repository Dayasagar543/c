#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    ptr[0] = 12;
    ptr[1] = 13;
    ptr[2] = 11;
    ptr[3] = 10;
    ptr[4] = 14;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    ptr = realloc(ptr, 8);
    printf("reallocation of memory is done enter new values \n");

    for (int i = 0; i < 8; i++)
    {
        printf("enter the value of choice for %d the value\n", i);
        scanf("%d\n", &ptr[i]);
    }

    printf("printing the values \n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    return 0;
}