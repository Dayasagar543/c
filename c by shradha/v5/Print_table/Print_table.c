#include <stdio.h>
void print_table(int num);
int main()
{
    int number;
    printf("enter a number to print the table\n");
    scanf("%d", &number);
    print_table(number);
    return 0;
}
void print_table(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d \n", num, i, num * i);
    }
}