#include <stdio.h>
int main()
{
    char val;
    printf("enter the alphabet to know weather its capital or not\n");
    scanf("%c", &val);
    int number = (int)val;
    // printf("%d", number);
    if (number >= 65 && number <= 90)
    {
        printf("capital letters\n");
    }
    else if (number >= 97 && number <= 122)
    {
        printf("small letters \n");
    }
    else
    {
        printf("wrong input");
    }
    return 0;
}