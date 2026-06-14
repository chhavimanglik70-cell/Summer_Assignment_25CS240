// Perform Linear search

#include<stdio.h>
int main(){
    int n, i, item, found=0;

    printf("Enter the number of elements= ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements= ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search= ");
    scanf("%d", &item);

    for(i=0; i<n; i++){
        if(arr[i] == item){
            printf("Element found at %d", i+1);
            found=1;
            break;
        }

            }
                    if( found == 0){
            printf("Element not found");
    }
    return 0;
    }