#include <stdio.h>
struct student
{
    char name[100];
    int rollno;
    float cgpa;
};
void printinfo(struct student s1);

int main()
{
    struct student s2 = {"rahul", 32, 443.44};
    printinfo(s2);

    return 0;
}
void printinfo(struct student s1)
{
    printf("%s\n",s1.name);
    printf("%d\n",s1.rollno);
    printf("%f\n",s1.cgpa);
}