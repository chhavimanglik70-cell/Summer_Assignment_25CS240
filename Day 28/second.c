// Bank account system

#include<stdio.h>

struct Account{
    int accNo;
    char name[50];
    float balance;
};
int main(){
    struct Account a;

    printf("Enter account number= ");
    scanf("%d", &a.accNo);

        printf("Enter name= ");
        scanf(" %[^\n]", a.name);

        printf("Enter initial balance= ");
        scanf("%f", &a.balance);
    
    printf("\n Account Details \n");
        printf("Account No= %d\n", a.accNo);
        printf("Name= %s\n", a.name);
        printf("Balance= %.2f\n", a.balance);
    
    return 0;
}