#include <stdio.h>
void percentage_cal(int science, int maths, int social);
int main()
{
    int science, maths, social;
    printf("enter your science, maths, social marks in the order\n");
    printf("enter your science marks\n");
    scanf("%d", &science);
    printf("enter your  maths marks \n");
    scanf("%d", &maths);
    printf("enter your  social marks \n");
    scanf("%d", &social);
    percentage_cal(science, maths, social);
    return 0;
}
void percentage_cal(int science, int maths, int social)
{
    float percentage = (science + maths + social) / 3;
    printf(" the percentage is  %f ", percentage);
}