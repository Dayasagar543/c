#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the students marks\n");
    scanf("%d", &marks);
    if (marks > 30 && marks <= 100)
    {
        printf("passed \n");
    }
    else if (marks <= 30 && marks >= 0)
    {
        printf("failed \n");
    }
    else
    {
        printf("wrong input \n");
    }

    return 0;
}