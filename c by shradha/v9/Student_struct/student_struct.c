#include <stdio.h>
#include <string.h>
// user defined data
struct student
{
    int roll_no;
    char name[50];
    float cpga;
};

int main()
{
    struct student s1;
    // s1.name = "dayasagar";
    strcpy(s1.name, "dayasagar");
    s1.cpga = 7.2;
    s1.roll_no = 304;

    printf("The name of the student is %s\n", s1.name);
    printf("The roll no of the student is %d\n", s1.roll_no);
    printf("The cgpa of the student is %f\n", s1.cpga);

    return 0;
}