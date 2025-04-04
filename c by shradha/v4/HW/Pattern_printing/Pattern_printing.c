#include <stdio.h>
int main()
{
    int option = 0, side = 0, length = 0, breadth = 0, height = 0;
    printf("choose  an option in pattern printing \n 1. square  2 . Rectangle  3. left triangle \n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:

        printf("please input side value\n");
        scanf("%d", &side);
        for (int i = 1; i <= side; i++)
        {
            for (int j = 1; j <= side; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        break;
    case 2:

        printf("please input length value\n");
        scanf("%d", &length);
        printf("please input breadth  value\n");
        scanf("%d", &breadth);

        for (int i = 1; i <= length; i++)
        {
            for (int j = 1; j <= breadth; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        break;
    case 3:
        printf("please input height of the triangle  value\n");

        scanf("%d", &height);

        for (int i = 1; i <= height; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        break;

    default:
        printf("wrong input\n");
        break;
    }
    return 0;
}