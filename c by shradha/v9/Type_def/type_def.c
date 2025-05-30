#include <stdio.h>
typedef struct student_mech
{
    char name[100];
    int rollno;
    float cgpa;

} std_m; // typedef is used to create aliases (nickname for structs)
void printinfo(std_m s1);
int main()
{

    std_m s2 = {"rajesh", 32, 234.433};
    printinfo(s2);
    return 0;
}

void printinfo(std_m s1)
{
    printf("%s\n", s1.name);
    printf("%d\n", s1.rollno);
    printf("%f\n", s1.cgpa);
}