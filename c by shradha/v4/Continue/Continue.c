#include <stdio.h>
int main()
{
    int number;
    printf("input the number till you want to print automaticaly\n");
    scanf("%d", &number);
    for (int i = 0; i <= number; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}