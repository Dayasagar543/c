#include <stdio.h>
int main()
{
    int age;
    printf("please enter your age dear \n");
    scanf("%d", age);
    if (age > 18)
    {
        printf("your are adult  \n");
        printf("they can drive \n");
        printf("they can vote\n");
    }
    else
    {
        printf("your are not  adult  \n");
    }
    printf("thank you !\n");
    
    return 0;
}