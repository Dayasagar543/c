#include <stdio.h>
typedef struct vectors
{
    int x;
    int y;
} vec;
void sum_vectors(vec v1, vec v2);
int main()
{
    vec v1;
    v1.x = 23;
    v1.y = 15;
    vec v2;
    v2.x = 15;
    v2.y = 25;
    sum_vectors(v1, v2);

    return 0;
}
void sum_vectors(vec v1, vec v2)
{
    vec sum;
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("the sum of the vectors v1 and v2 is { x:%d , y:%d}\n", sum.x, sum.y);
}