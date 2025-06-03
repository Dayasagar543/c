#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size;
    printf("please enter the  size of the memory you want to allocate \n");
    scanf("%d", &size);

    int *ptr;
    ptr = (int *)malloc(5 * sizeof(size));
    for (int i = 0; i < size; i++)
    {
        printf("enter the number you want...\n");
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("the number you have entered in the box %d is %d\n", i, ptr[i]);
    }

    free(ptr);
    return 0;
}