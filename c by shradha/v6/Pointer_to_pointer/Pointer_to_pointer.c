#include <stdio.h>
int main()
{
    // pointer to pointer ** is used befor the pptr to specify
    // that its a pointer to pointer

    float price = 100;
    float *ptr = &price;
    float **pptr = &ptr;
    printf(" the address of pointer is of ptr %p \n", ptr);
    printf(" the address of pointer is of pptr %p \n", pptr);

    return 0;
}