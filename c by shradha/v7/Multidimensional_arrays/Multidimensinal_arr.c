#include <stdio.h>
int main()
{
    // multi dimensional array
    int array[][3] = {{70, 80, 80}, {30, 40, 90}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", array[i][j]);
        }
    }

    return 0;
}