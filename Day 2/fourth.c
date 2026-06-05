// Check whether the given number is palindrome or not

#include<stdio.h>
int main(){
    int n, temp, rev=0, lastdigit;
    printf("Enter the number= ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        lastdigit = n % 10;
        rev = rev*10 + lastdigit;
        n = n/10;
    }
    if(temp==rev)
    printf("The number is a palindrome number");
    else
    printf("The number is not the palindrome number");
    return 0;
}