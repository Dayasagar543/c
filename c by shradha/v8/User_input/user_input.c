#include <stdio.h>
int main()
{
    // printf("please enter your first name\n");
    // char first_name[] ="";
    // scanf("%s", first_name);
    // printf("%s\n", first_name);
    // printf("please enter your last name\n");
    // char last_name[] ="";
    // scanf("%s", last_name);
    // printf("%s\n", last_name);

    // printf("printing the full name  : \t  %s   \n", first_name, last_name);

    char name[100];
    // gets(name);
    fgets(name, 100, stdin);
    puts(name);

    return 0;
}