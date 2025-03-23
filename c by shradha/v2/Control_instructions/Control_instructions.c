#include <stdio.h>
int main()
{ // sequence control may be like functions or like general line by line execution
    // control instructions like if and else
    int age = 18;
    if (age >= 18)
    {
        printf("you are allowed to vote\n");
    }
    else
    {
        printf("you are not allowed to vote\n");
    }

    // loop control
    printf("printing while loop\n");
    int i = 0;
    while (i <= 10)
    {
        /* code */
        printf("printing the numbers %d \n", i);
        i++;
    }
    printf("printing for loop \n");
    for (size_t i = 0; i < 50; i++)
    {
        printf("the value of i is %d\n", i);
    }

    // case control
    printf("this is switch zone \n");
    int day = 2;
    // switch
    switch (day)
    {
    case 1:
        printf("today is monday \n");
        break;
    case 2:
        printf("today is tuesday \n");
        break;
    case 3:
        printf("today is wednesday \n");
        break;
    case 4:
        printf("today is thursday \n");
        break;
    case 5:
        printf("today is friday \n");
        break;
    case 6:
        printf("today is saturday \n");
        break;
    case 7:
        printf("today is sunday \n");
        break;

    default:
        printf("invalid input \n");
        break;
    }
    return 0;
}