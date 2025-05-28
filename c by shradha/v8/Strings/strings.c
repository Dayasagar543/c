#include <stdio.h>
int main()
{

    // any character array with \0 at the end as an element
    // then it is considered the string . otherwise called as character array
    char name[] = {'D', 'A', 'Y', 'A', 'S', 'A', 'G', 'A', 'R','\0'};
    char name1[] = "dayasagar";
    printf("%s", name);
    return 0;
}