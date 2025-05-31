#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("data.txt", "r");
    if (fptr == NULL)
    {
        printf("the file does not exist\n");
    }
    else
    {
        printf("%c", fgetc(fptr));
        printf("%c", fgetc(fptr));
        printf("%c", fgetc(fptr));
        printf("%c", fgetc(fptr));
        printf("%c", fgetc(fptr));

        fclose(fptr);
    }

    return 0;
}