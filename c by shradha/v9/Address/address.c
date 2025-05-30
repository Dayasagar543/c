#include <stdio.h>
typedef struct address
{
    int houseno;
    int block;
    char city[50];
    char state[50];
} ad;
void print(ad p);
int main()
{
    ad people[5];
    for (int i = 0; i < 5; i++)
    {
        printf("please enter the house no \n");
        scanf("%d", &people[i].houseno);
        printf("please enter the block no \n");
        scanf("%d", &people[i].block);
        printf("please enter the city  \n");
        scanf("%s", &people[i].city);
        printf("please enter the state \n");
        scanf("%s", &people[i].state);
        
    }
    for (int i = 0; i < 5; i++)
    {
        print(people[i]);
    }
    return 0;
}
void print(ad p)
{
    printf("%d\n", p.houseno);
    printf("%d\n", p.block);
    printf("%s\n", p.city);
    printf("%s\n", p.state);
}