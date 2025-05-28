#include <stdio.h>
#include <string.h>
int main()
{
    // char first_name[] = "dayasagar";
    // char first_name[] = "barre";
    char first_name[] = "cat";
    char last_name[] = "barre";

    printf("%d\n", strcmp(first_name, last_name)); // if string compare function is 0 that means characters in string are equal or no case differnce
    // otherwise based on the character and case the ascii values differs and produces a positive or negative value..
    
    printf("%d\n", strcmp(last_name, first_name));
    return 0;
}