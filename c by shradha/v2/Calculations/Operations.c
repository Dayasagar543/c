#include <stdio.h>
int main()
{
    int sum, multiply, subtraction, division, modulus, input1, input2;
    printf("Please input first number\n");
    scanf("%d", &input1);
    printf("Please input second number\n");
    scanf("%d", &input2);
    // sum = input1 + input2;
    // printf("the sum numbers is %d \n",sum);
    // subtraction = input1-input2;
    // printf("the subtraction numbers is %d \n",subtraction);
    // multiply = input1 * input2;
    // printf("the multiply numbers is %d \n",multiply);
    // division = input1 / input2;
    // printf("the division numbers is %d \n",division);
    // modulus = input1%input2;
    // printf("the modulus numbers is %d \n",modulus);

    printf("the sum numbers is %d \n", input1 + input2);

    printf("the subtraction numbers is %d \n", input1 - input2);

    printf("the multiply numbers is %d \n", input1 * input2);

    printf("the division numbers is %d \n", input1 / input2);

    printf("the modulus numbers is %d \n", input1 % input2);

    return 0;
}