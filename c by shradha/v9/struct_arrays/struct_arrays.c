#include <stdio.h>
#include <string.h>
struct students
{
    int rollno;
    char name[100];
    float cpga;
};

int main()
{

    struct students mech[100];
    strcpy(mech[0].name, "sagar");
    mech[0].cpga = 8.5;
    mech[0].rollno = 22;
    printf("%s\n", mech[0].name);
    printf("%f\n", mech[0].cpga);
    printf("%d\n", mech[0].rollno);
    return 0;
}