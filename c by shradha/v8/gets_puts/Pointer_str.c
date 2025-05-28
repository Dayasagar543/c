#include <stdio.h>
int main()
{
    // we can use srings using pointer initializtions too as they are character arrays too.
    char *name = "sundharam";
    puts(name);
    name = "charan";
    puts(name);

    //but the ones assinged with arrays cannot be changed as they are fixed
    char firstname[] = "hi there how are you all";
    puts(firstname);
    // firstname = "rahesk";
    return 0;
}