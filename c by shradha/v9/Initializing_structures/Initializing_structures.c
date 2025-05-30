#include <stdio.h>
struct students
{
    char name[100];
    int rollno;
    float cgpa;
};

int main()
{
    struct students s1 = {"ramesh", 21, 8.1};
    printf("%s\n", s1.name);
    printf("%d\n", s1.rollno);
    printf("%f\n", s1.cgpa);

    return 0;
}