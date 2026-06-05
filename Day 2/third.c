// Calculate the product of digits of a number

#include<stdio.h>
int main(){
    int n,product=1,lastdigit;
    printf("Enter the number= ");
    scanf("%d",&n);
    while(n!=0){
        lastdigit = n%10;
        product = product * lastdigit;
        n = n/10;
    }
    printf("The product of the digits of the given number is %d", product);
    return 0;
}