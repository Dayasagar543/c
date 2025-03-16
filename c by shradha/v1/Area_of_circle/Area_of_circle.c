#include <stdio.h>
#include <math.h>
int main()
{
    float radius;
    printf("please input the radius \n");
    scanf("%f", &radius);
    float Area_of_cicle = 3.14 * radius * radius;
    printf("the area of the circle is %f", Area_of_cicle);
}