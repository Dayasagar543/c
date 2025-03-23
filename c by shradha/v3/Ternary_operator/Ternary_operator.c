#include <stdio.h>
int main()
{
    int age;
    printf("enter you age\n ");
    scanf("%d", &age);
    age <= 18 ? printf("not an adult\n") : printf("an adult\n");
    return 0;
}