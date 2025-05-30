#include <stdio.h>
typedef struct complex_numbers
{
    int real;
    int imaginary;
}comp;
void print_complex(comp num);
int main()
{
    comp num={5,8};
    comp *data = &num;
    printf("%d is the real number %d is the imaginary number \n", data->real, data->imaginary);
    print_complex(num);
    return 0;
}
void print_complex(comp num){
    printf("the real number is %d and imaginary number is %d\n", num.real, num.imaginary);
}