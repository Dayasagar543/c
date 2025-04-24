#include <stdio.h>
int main()
{
    int age1 = 18;
    int age2 = 23;
    int *ptr1 = &age1;
    int *ptr2 = &age2;

    printf("%u,%u \t the difference=%u\n", ptr1, ptr2, ptr1 - ptr2);
    ptr2 = &age1;
    printf("comparison=%u\n", ptr1 == ptr2);
    return 0;
}