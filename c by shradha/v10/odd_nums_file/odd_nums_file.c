#include <stdio.h>
void odd_nums(int num);

int main()
{
    int num;
    printf("please input the number till where you want to input the odd numbs\n");
    scanf("%d", &num);
    odd_nums(num);

    return 0;
}
void odd_nums(int num)
{
    FILE *fptr;
    fptr = fopen("oddnums.txt", "w");
    int i = 0;
    while (i != num)
    {
        if (i % 2 != 0)
        {
            fprintf(fptr, "%d\n", i);
        }
        i++;
    }
    fclose(fptr);
}