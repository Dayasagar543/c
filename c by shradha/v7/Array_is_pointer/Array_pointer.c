#include <stdio.h>
int main()
{
    // array is a pointer  int *ptr=&array[0]  or  *ptr ==array are both the same ..
    int numbers[5];

    // taking the inputs for the array using pointer
    int *ptr = &numbers[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d index : \n", i);
        scanf("%d", (ptr + i));
    }

    // printing the values of the array
    for (int i = 0; i < 5; i++)
    {
        printf("%d index : value is %d\n", i, *(ptr + i));
    }
    return 0;
}