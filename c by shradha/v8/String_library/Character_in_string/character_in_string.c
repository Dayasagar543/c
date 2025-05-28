#include <stdio.h>
void char_repeat(char array[], char val);
int main()
{
    char string[100];
    printf("please insert the string to count the letter occuring in it\n");
    fgets(string, 100, stdin);
    puts(string);
    char val;
    printf("please insert a character to search the repetetion in the string\n");
    scanf("%c", &val);
    char_repeat(string, val);
    return 0;
}
void char_repeat(char array[], char val)
{
    int count = 0;
    int i = 0;
    while (array[i] != '\0')
    {
        if (array[i] == val)
        {
            count++;
        }
        i++;
    }
    printf("%d\n", count);
}