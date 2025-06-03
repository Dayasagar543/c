#include <stdio.h>
#include <stdlib.h>
int main()
{

    float *ptr;
    ptr = (float *)malloc(6 * sizeof(float));
    ptr[0] = 34.2332;
    ptr[1] = 343.54;
    ptr[2] = 322.332;
    ptr[3] = 22.54;
    ptr[5] = 665.3792;
    ptr[6] = 12.342;
    ptr[7] = 78.48928;
    for (int i = 0; i < 7; i++)
    {
        printf("%f \n", ptr[i]);
    }

    return 0;
}