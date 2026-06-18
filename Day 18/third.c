// Binary search


#include<stdio.h>
int main(){
    int n, item, left=0, mid, found=0, i;
    printf("Enter the number of elements= ");
    scanf("%d", &n);

    int arr[n];
    for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }
    scanf("%d", &item);
    int right = n-1;
    while(left <= right){
        mid = (left + right)/2;
        if(arr[mid] == item){
            found = 1;
            break;
        }
        else if(arr[mid] < item){
            left = mid + 1;
        }
        else
        right = mid - 1;
        }
        if(found)
        printf("Element found at index %d", mid);
        else
        printf("Element not found");
    
    return 0;

}