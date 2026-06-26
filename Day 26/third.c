// ATM Simulation

#include<stdio.h>
int main(){
    int choice;
    float balance=10000, amount;
    
    do{
        printf("ATM Menu\n");
        printf("1. Check balance\n");
        printf("2. Deposit\n");
        printf("3. Withdrawn\n");
        printf("4. Exit\n");

        printf("Enter choice=");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            printf("Balance= %.2f\n", balance);
            break;
            
               case 2:
            printf("Enter deposit amount= ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("Amount deposited successfully\n");
            break;

               case 3:
            printf("Enter withdrawal amount= ");
            scanf("%f", &amount);

            if(amount <= balance){
                balance = balance - amount;
                printf("PLease collect your cash\n");
            }
            else{
            printf("Insufficient balance\n");
            }
            break;

               case 4:
            printf("Thank you\n");
            break;

            default:
            printf("Invalid choice\n");
        }
    }
    while(choice != 4);
     return 0;
}