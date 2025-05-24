#include <stdio.h>
int main()
{
    int m;
    printf("input the number of tables you want to print \n");
    scanf("%d", &m);
    int n;
    printf("input the number of tables you want to print till what value\n");
    scanf("%d", &n);
    int table;

    // array as storage for the table values
    int tables[m][n];
    // inserting the values into the array
    for (int i = 0; i < m; i++)
    {
        printf("input the number of tables you want to print till what value\n");
        scanf("%d", &table);
        for (int j = 0; j <= n; j++)
        {
            tables[i][j] = table * j;
            printf("%d\t", tables[i][j]);
        }
        printf("\n");
    }

    return 0;
}