#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("data.txt", "w");
    fputc('m', fptr);
    fputc('a', fptr);
    fputc('n', fptr);
    fputc('g', fptr);
    fputc('o', fptr);
    fputc('s', fptr);
    fclose(fptr);
    return 0;
}