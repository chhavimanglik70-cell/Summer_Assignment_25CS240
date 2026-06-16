// Find pair with given sum 

#include<stdio.h>
int main(){
    int n, i, j, target, found=0;
    printf("Enter number of elements= ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements= ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter target sum= ");
    scanf("%d", &target);

    printf("Pairs with sum %d are= ", target);
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] + arr[j] == target){
                printf("(%d,%d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    if(!found){
        printf("No pair found");
        }
    return 0;
}