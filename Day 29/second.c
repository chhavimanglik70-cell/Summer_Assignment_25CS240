// Menu-driven array operations system

#include<stdio.h>
int main(){
    int arr[100], n, i, choice, sum=0;
    
       printf("Enter number of elements=");
        scanf("%d", &n);

        printf("Enter the elements= ");
    for(i=0; i<n; i++)
       scanf("%d", &arr[i]);

        printf("\n1. Display array\n");
        printf("2. Find sum\n");
        printf("3. Find largest element\n");
       
           printf("Enter choice=");
        scanf("%d", &choice);

        switch(choice){
            case 1:
        printf("Array elements= ");
    for(i=0; i<n; i++)
       printf(" %d ", arr[i]);
            break;
            
               case 2:
    for(i=0; i<n; i++)
    sum = sum + arr[i];
       printf("Sum = %d\n", sum);
            break;

               case 3:{
                int max = arr[0];
    for(i=0; i<n; i++)
       if(arr[i] > max)
       max = arr[i];
       printf("Largest= %d\n", max);
            break;
               }

            default:
            printf("Invalid choice\n");
        }
     return 0;
}