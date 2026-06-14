// Find the second largest element in a given array

#include<stdio.h>
int main(){

    int n, i, largest, seclargest;

    printf("Enter the number of elements= ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements= ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
     
    largest= seclargest = arr[0];
    for(i=1; i<n; i++){
        if(arr[i] > largest){
            seclargest= largest;
            largest = arr[i];
        }
        else if(arr[i] > seclargest && arr[i] != largest){
            seclargest= arr[i];
        }
    }

    printf("Second largest element= %d", seclargest);

    return 0;
}