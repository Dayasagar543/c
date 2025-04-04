#include <stdio.h>
void Bonjur();
void Namasthe();

int main()
{
    char val;
    printf("enter your nationality f for french and i for india\n");
    scanf("%c", &val);
    if (val == 'i')
    {
        Namasthe();
    }
    else
    {
        Bonjur();
    }
    return 0;
}

void Bonjur()
{
    printf("Bonjur \n");
}
void Namasthe()
{
    printf("Namasthe! \n");
}