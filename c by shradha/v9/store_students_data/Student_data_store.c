#include <stdio.h>
#include<string.h>
struct Student_data
{
    char name[100];
    int rollno;
    float cgpa;
};

int main()
{
    struct Student_data s1;
    // s1.name = "dayasagar";
    strcpy(s1.name, "dayasagar");
    s1.cgpa = 7.2;
    s1.rollno = 304;

    printf("The name of the student is %s\n", s1.name);
    printf("The roll no of the student is %d\n", s1.rollno);
    printf("The cgpa of the student is %f\n", s1.cgpa);

    struct Student_data s2;
    // s2.name = "dayasagar";
    strcpy(s2.name, "rahul");
    s2.cgpa = 9.2;
    s2.rollno = 314;

    printf("The name of the student is %s\n", s2.name);
    printf("The roll no of the student is %d\n", s2.rollno);
    printf("The cgpa of the student is %f\n", s2.cgpa);

    struct Student_data s3;
    // s3.name = "dayasagar";
    strcpy(s3.name, "charan");
    s3.cgpa = 8.2;
    s3.rollno = 324;

    printf("The name of the student is %s\n", s3.name);
    printf("The roll no of the student is %d\n", s3.rollno);
    printf("The cgpa of the student is %f\n", s3.cgpa);
    return 0;
}