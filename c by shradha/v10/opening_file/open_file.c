#include <stdio.h>
int main()
{
    FILE *fptr;
    // above is for write mode and file creation
    fptr = fopen("data1.txt", "a");
    if (fptr == NULL)
    {
        printf("the file doesnot exist");
    }
    else
    {
        fprintf(fptr, "%c", ' ');
        fprintf(fptr, "%c", 'm');
        fprintf(fptr, "%c", 'a');
        fprintf(fptr, "%c", 'n');
        fprintf(fptr, "%c", 'g');
        fprintf(fptr, "%c", 'o');
        fclose(fptr);
    }
    return 0;
}