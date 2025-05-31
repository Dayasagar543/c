#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("nums.txt", "w");
    int a, b;
    printf("please enter the numbers you want\n");
    scanf("%d", &a);
    scanf("%d", &b);

    fprintf(fptr, "%d\t", a);
    fprintf(fptr, "%d\t", b);
    fclose(fptr);


    //again opening the file
    fptr = fopen("nums.txt", "r");
    int c, d;
    fscanf(fptr, "%d", &c);
    fscanf(fptr, "%d", &d);
    fclose(fptr);

    //reopening the file
    fptr = fopen("nums.txt", "w");
    fprintf(fptr, "%d", c + d);
    fclose(fptr);

    return 0;
}