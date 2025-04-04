#include <stdio.h>
int addition(int a, int b);
int main()
{
    int a, b;
    printf("enter your first number \n");
    scanf("%d", &a);
    printf("enter your second number \n");
    scanf("%d", &b);
    int c = addition(a, b);
    printf("sum of your  numbers \n");
    printf("%d", c);
    return 0;
}
int addition(int a, int b)
{
    return a + b;
}