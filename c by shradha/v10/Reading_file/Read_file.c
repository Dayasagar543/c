#include <stdio.h>
int main()
{

    FILE *fptr;
    fptr = fopen("data.txt", "r");
    if (fptr == NULL)
    {
        printf("there no file such as one");
    }
    else
    {
        char ch;
        fscanf(fptr, "%c", &ch);
        printf("the character is : %c", ch);
        fclose(fptr);
    }
    return 0;
}