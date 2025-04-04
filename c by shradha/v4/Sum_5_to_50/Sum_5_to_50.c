#include <stdio.h>
int main()
{

    int start = 5, end = 50, sum = 0;
    for (int i = start; i <= 50; i++)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}