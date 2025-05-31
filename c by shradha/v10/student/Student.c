#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("student_Data.txt", "w");

    int rollno;
    char name[100];
    float cgpa;

    printf("enter your roll no\n");
    scanf("%d", &rollno);
    printf("enter your name\n");
    scanf("%s", &name);
    printf("enter your cgpa\n");
    scanf("%f", &cgpa);

    fprintf(fptr, "name : %s \t", name);
    fprintf(fptr, "rollno : %d \t", rollno);
    fprintf(fptr, "cgpa : %f \t", cgpa);

    fclose(fptr);

    return 0;
}