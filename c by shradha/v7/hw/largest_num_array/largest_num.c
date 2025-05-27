#include <stdio.h>
void larges_num_array(int array[], int length);
int main()
{
    int array[] = {12, 34, 5, 6, 7, 10, 8, 9, 7, 6, 5, 3, 2};

    larges_num_array(array, 13);

    return 0;
}
void larges_num_array(int array[], int length)
{
    int largest_num = array[0];
    for (int i = 1; i < length; i++)
    {

        if (array[i] > largest_num)
        {
            largest_num = array[i];
        }
    }
    printf("%d", largest_num);
}