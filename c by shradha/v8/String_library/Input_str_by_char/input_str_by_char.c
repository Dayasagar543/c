#include <stdio.h>
void string_maker();

int main()
{
    string_maker();
    return 0;
}

void string_maker()
{
    printf("please input the string you want to display\n");
    char string[100];
    char ch;
    int i = 0;
    while (ch != '\n')
    {
        scanf("%c", &ch);
        string[i] = ch;
        i++;
    }
    string[i] = '\0';
    puts(string);
}