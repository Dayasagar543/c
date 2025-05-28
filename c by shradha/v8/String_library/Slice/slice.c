#include <stdio.h>
void slice(char array[], int inital_index, int final_index);
int main()
{
    char string[100];
    printf("please enter a string \n");
   fgets(string,100,stdin);
    slice(string,3,10);

    return 0;
}
void slice(char array[], int inital_index, int final_index)
{
    char newstr[100];
    int j = 0;
    for (int i = inital_index; i <= final_index;i++,j++){
        newstr[j] = array[i];
    }
    newstr[j] = '\0';
    puts(newstr);
}