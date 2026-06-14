// Find duplicates in an array

#include<stdio.h>
int main(){
    int n, i, j, found=0;

    printf("Enter the number of elements= ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements= ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements are= ");
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                printf("%d", arr[i]);
                found = 1;
                break;
            }
        }
    }

    if(found == 0){
        printf("No duplicate elements found");
    }

    return 0;
}