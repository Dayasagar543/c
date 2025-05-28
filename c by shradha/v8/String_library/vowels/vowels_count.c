#include <stdio.h>
#include <string.h>
void count_vowels(char array[]);
int main()
{
    char string[100];
    printf("insert the string to count the vowels in the string\n");
    fgets(string, 100, stdin);
    count_vowels(string);
    return 0;
}

void count_vowels(char array[])
{
    int count = 0;
    int i = 0;
    // int length = strlen(array);
    while (array[i] != '\0')
    {
        i++;
        if (array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u' || array[i] == 'A' || array[i] == 'E' || array[i] == 'I' || array[i] == 'O' || array[i] == 'U')
        {
            count++;
        }
    }
    // printf("%d", length-count);
    printf("%d", count);
}