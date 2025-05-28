#include <stdio.h>
int string_length(char array[]);
int main()
{
    char name[100];
    fgets(name,100,stdin);
    int length = string_length(name);
    printf("%d is  the length of the string.\n",length);

    return 0;
}
int string_length(char array[])
{
    int i = 0;
    while (array[i] != '\0')
    {
        i++;
    }
    return i-1;
}