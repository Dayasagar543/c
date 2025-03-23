#include <stdio.h>
int main()
{

    float input;
    int output;
    printf("please enter the number\n");
    scanf("%f", &input);
    printf("the input value before being type casted %f\n", input);
    printf("the input is float and typecasted to int and being printed\n");
    output = (int)input;
    printf("the out put of number %d", output);
    return 0;
}