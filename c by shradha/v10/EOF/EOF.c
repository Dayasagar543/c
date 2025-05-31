#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("data.txt", "r");

    char ch = fgetc(fptr);

    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}