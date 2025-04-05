#include <stdio.h>
#include <math.h>
void Area_square(int side);
void Area_Rectangle(int length, int breath);
void circle(int radius);
int main()
{
    int side, length, width, radius;
    printf("please enter the side to calculate the area of the square\n");
    scanf("%d", &side);
    Area_square(side);
    printf("please enter the length and width to calculate the area of the rectangle\n");
    printf("please enter the length  of the rectangle\n");
    scanf("%d", &length);
    printf("please enter  width of the rectangle\n");
    scanf("%d", &width);
    Area_Rectangle(length, width);
    printf("please enter the radius to calculate the area of the circle\n");
    scanf("%d", &radius);
    circle(radius);
}
void Area_square(int side)
{
    printf("the area of the square %d \n", side * side);
}
void Area_Rectangle(int length, int width)
{
    printf("the area of the rectangle %d \n", length * width);
}
void circle(int radius)
{
    printf("the area of the circle %f \n", 3.14 * radius * radius);
}