#include <Stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("nums.txt", "r");
    int n;
    fscanf(fptr, "%d", &n);
    printf("the number is =%d\n", n);
    fscanf(fptr, "%d", &n);
    printf("the number is =%d\n", n);
    fscanf(fptr, "%d", &n);
    printf("the number is =%d\n", n);
    fscanf(fptr, "%d", &n);
    printf("the number is =%d\n", n);
    fscanf(fptr, "%d", &n);
    printf("the number is =%d\n", n);
    fscanf(fptr, "%d", &n);
    printf("the number is =%d\n", n);
    fclose(fptr);
    return 0;
}