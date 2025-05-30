#include <stdio.h>
typedef struct Banking_details
{
    int account_no;
    char name[50];
    char account_type[40];
} bank;
void print_bank(bank c1);
int main()
{
    bank c1 = {23458, "sabitha", "saving"};
    bank c2 = {23448, "sweety", "current"};
    print_bank(c1);
    print_bank(c2);
    return 0;
}
void print_bank(bank c1)
{
    printf("the account number is %d and the name of the acccount holder is %s the account type is %s\n", c1.account_no, c1.name, c1.account_type);
}