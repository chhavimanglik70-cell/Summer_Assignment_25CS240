// Find frequency of an element

#include<stdio.h>
int main(){

    int n, i, item, count=0;
    
    printf("Enter number of elements= ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements= ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element whose frequency is to be found= ");
    scanf("%d", &item);
    
    for(i=0; i<n; i++){
        if(arr[i] == item){
            count++;
        }
    }
    
    printf("Frequency of %d= %d", item, count);
    
    return 0;
}