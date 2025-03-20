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
 
    return 0;
}