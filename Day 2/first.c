// Calculate the sum of digits of a number

#include<stdio.h>
int main(){
    int n,lastdigit,sum=0;
    printf("Enter the number= ");
    scanf("%d",&n);
    while(n!=0){
        lastdigit = n % 10;
        sum = sum + lastdigit;
        n = n/10;
    }
    printf("The Sum of digits of the given number is %d", sum);
    return 0;
    
}