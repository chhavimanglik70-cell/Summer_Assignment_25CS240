// Find common elements in two arrays

#include<stdio.h>
int main(){
    int a[100], b[100], n1, n2, i, j, found;
    printf("Enter the number of elements of first array= ");
    scanf("%d", &n1);

    printf("Enter the elements of first array= ");
    for(i=0; i<n1; i++){
    scanf("%d", &a[i]);
    }
    printf("Enter the number of elements of second array= ");
    scanf("%d", &n2);

    printf("Enter the elements of second array= ");
    for(i=0; i<n2; i++){
    scanf("%d", &b[i]);
        }
        printf("Common elements in two arrays= ");
        for(i=0; i<n1; i++){
            found = 0;
            for(j=0; j<n2; j++){
                if(a[i] == b[j]){
                    found = 1;
                    break;
                }
            }
            if(found){
                printf("%d", a[i]);
            }
        }
    return 0;
    }