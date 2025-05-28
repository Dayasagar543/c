#include<stdio.h>
#include<string.h>
void salting(char array[]);

int main(){
    char password[100];
    printf("please enter the password you want to create\n");
    scanf("%s", &password);
    salting(password);
    return 0;
}
void salting(char array[]){
    char salt[] = "123";
    char new_passwd[200];
    strcpy(new_passwd, array);
    strcat(new_passwd, salt);
    puts(new_passwd);
}