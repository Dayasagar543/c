#include <stdio.h>
void Hellow_world(int n);
int main()
{
    Hellow_world(5);
    return 0;
}
void Hellow_world(int n)
{
    // if (n > 0)
    // {
    //     printf("hellow world!\n");
    //     Hellow_world(n - 1);
    // }

    if (n == 0)
    {
        return;
    }
    printf("hellow world \n");
    Hellow_world(n -= 1);
    
}