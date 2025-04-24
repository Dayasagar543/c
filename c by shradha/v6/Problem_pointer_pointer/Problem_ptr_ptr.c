#include <stdio.h>
int main()
{
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d the value of the i ", **pptr);
    return 0;
}