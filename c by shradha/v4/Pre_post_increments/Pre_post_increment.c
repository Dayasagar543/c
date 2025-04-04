#include <stdio.h>
int main()
{
    int a = 5;
    printf("%d\n", a);
    printf("post increment\n");
    a++;
    printf("%d\n", a);
    printf("pre increment\n");
    ++a;
    printf("%d\n", a);
    printf("post decrement\n");
    a--;
    printf("%d\n", a);
    printf("pre decrement\n");
    --a;
    printf("%d\n", a);

    return 0;
}