#include <stdio.h>
int Fibbo(int n);
int main()
{
    int value = Fibbo(6);
    printf("the fibonacci value  is  %d ", value);
    return 0;
}
int Fibbo(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (Fibbo(n - 1) + Fibbo(n - 2));
    }
}