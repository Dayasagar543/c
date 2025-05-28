#include <stdio.h>
#include <string.h>

int main()
{
    // char first_name[50];
    // printf("please input the first name :\n");
    // fgets(first_name, 50, stdin);
    // // puts(first_name);
    // char last_name[25];
    // printf("please input the last name :\n");
    // fgets(last_name, 25, stdin);
    // // puts(last_name);
    // printf("%s", strcat(first_name,last_name));

    char first_name[] = "dayasagar";
    char last_name[] = " barre";
    printf("%s", strcat(first_name, last_name));
    return 0;
}