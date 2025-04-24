#include <stdio.h>
int main()
{
    int age = 21;
    int *data = &age;
    int _age = *data;
    printf("%d", _age);
    //  printing the addresses
    printf(" this is the address stored in the data original variable %p \n", &age);
    printf(" this is the address stored in the data pointer %p \n", data);
    printf(" this is the address stored using the unsigned integer formatter in the data pointer %u \n", data);
    printf(" this is the address of data pointer %p \n", &data);

    // printing the values using the poiter addresses
    printf("%d\n", age);
    printf("%d\n", *data);
    printf("%d\n", *(&age));

    return 0;
}