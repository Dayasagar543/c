#include <stdio.h>
struct student
{
    char name[100];
    int rollno;
    float cgpa;
};

int main()
{
    struct student s1 = {"naveen", 1443, 94.5};
    struct student *ptr = &s1;
    printf("%s\n", (*ptr).name);
    printf("%d\n", (*ptr).rollno);
    printf("%f\n", (*ptr).cgpa);
    // you also use this method to run the pointer structs
    printf("%s\n", ptr->name);
    printf("%d\n", ptr->rollno);
    printf("%f\n", ptr->cgpa);

    return 0;
}