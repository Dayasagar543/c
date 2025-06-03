#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    ptr[0] = 20;
    ptr[1] = 54;
    ptr[2] = 34;
    ptr[3] = 11;
    ptr[4] = 9;
    ptr[5] = 12;
    // ptr[6] = 122;
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    return 0;
}