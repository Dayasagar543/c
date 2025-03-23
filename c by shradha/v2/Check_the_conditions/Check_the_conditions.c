#include <stdio.h>
int main()
{
    int isSunday = 1;
    int itsSnowing = 1;
    printf("true\n", isSunday && itsSnowing);

    int itsMonay = 1;
    int itsRaining = 1;
    printf("true\n", itsMonay || itsRaining);

    int num = 45;
    printf("%d \n", num > 9 && num < 100);
    return 0;
}