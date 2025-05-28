#include <stdio.h>
#include <string.h>
int main()
{
    char greetings[] = "good";
    char time[] = "morning";
    puts(greetings);
    puts(time);
    strcpy(greetings, time);
    puts(greetings);
    return 0;
}