#include <stdio.h>
int main()
{

    int value = 25;
    int *ptr = &value;
    int **pptr = &ptr;
    int ***ppptr = &pptr;

    printf("%d", ***ppptr);

    return 0;
}