#include <stdio.h>
int main()
{

    printf("please insert the first name \n");
    char first_name[]="genz";
    scanf("%s", &first_name);

    int i = 0;
    while (first_name[i] != '\0')
    {
        printf("%c", first_name[i]);
        i++;
    }
    printf("\n");

    // printf("%s\n", first_name);
    char last_name[] = "";
    printf("please insert the last name \n");
    scanf("%s", &last_name);
    printf("%s\n", last_name);

    return 0;
}