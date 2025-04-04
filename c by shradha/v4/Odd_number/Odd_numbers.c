#include <stdio.h>
// odd numbers between 5 to 50
int main()
{
    int start = 5, end = 50;
    for (int i = start; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}