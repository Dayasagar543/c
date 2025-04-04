#include <stdio.h>
int prime_number(int number);
int main()
{
    int first_number = 0, lastnumber = 0, count = 0;
    printf("enter numbers to know prime numbers in the range\n");
    printf("enter starting number of the range \n");
    scanf("%d", &first_number);
    printf("enter ending number of the range \n");
    scanf("%d", &lastnumber);
    for (int j = first_number; j <= lastnumber; j++)
    {
        if (prime_number(j) == 1)
        {
            count++;
        }
    }
    printf("the number of prime numbers in the range are %d", count);

    return 0;
}

int prime_number(int number)
{
    if (number <= 1)
        return 0;

    for (int i = 2; i < number; i++)
    {

        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}