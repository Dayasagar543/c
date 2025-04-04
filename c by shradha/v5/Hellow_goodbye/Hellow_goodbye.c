#include <stdio.h>
void Hellow_world();
void Good_bye();

int main()
{
    for (int i = 0; i < 5; i++)
    {
        Hellow_world();
    }
    for (int i = 0; i < 5; i++)
    {
        Good_bye();
    }
    return 0;
}

void Hellow_world()
{
    printf("hellow world \n");
}
void Good_bye()
{
    printf("good bye! \n");
}