#include <stdio.h>
int main()
{
    int result = 2 * 8 / 2 * 4; // 32 if same operation on the both side then left to right otherwise operations start in the reverse order
    printf("the result is %d\n", result);
    int result1 = 2 * (2 / 2) * 4; // 8 if same operation on the both side then left to right otherwise operations start in the reverse order
    printf("the result is %d\n", result1);
    int result2 = 2 * 8 - 2 * 4; // 52 if same operation on the both side then left to right otherwise operations start in the reverse order
    printf("the result is %d\n", result2);
    int result3 = 2 + 8 / 2 * 4; //  if same operation on the both side then left to right otherwise operations start in the reverse order
    printf("the result is %d\n", result3);
    return 0;
}