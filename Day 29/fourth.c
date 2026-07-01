// Inventory Management system

#include<stdio.h>
struct Item{
    int id, quantity;
    char name[50];
};

int main(){
    struct Item item[10];
    int n, i;

       printf("Enter number of items=");
        scanf(" %d", &n);

        for(i=0; i<n; i++){
            printf("\nItem %d\n", i+1);

            printf("Enter Item id= ");
            scanf("%d", &item[i].id);

            printf("Enter Item name= ");
            scanf(" %[^\n]", item[i].name);
            
            printf("Enter quantity= ");
            scanf("%d", &item[i].quantity);
        }

        printf("\n Inventory Deatils\n");
        for(i=0; i<n; i++){
             printf("\nID=%d\n", item[i].id);
              printf("Name= %s\n", item[i].name);
               printf("Quantity= %d\n", item[i].quantity);
        }
     return 0;
}