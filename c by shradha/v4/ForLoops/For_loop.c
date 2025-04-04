#include <stdio.h>
int main()
{

    int number;
    printf("Enter the number  for For loop\n");
    scanf("%d", &number);
    for (int i = 0; i <= number; i++)
    {
        printf("%d \n", i);
    }

    for (float i = 0; i <= number; i++)
    {
        printf("%f \n", i);
    }

    for (char ch = 'A'; ch <= 'z'; ch++)
    {
        printf("%c \n", ch);
    }

    return 0;
}