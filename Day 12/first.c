// Function for palindrome

#include<stdio.h>
int palindrome(int n){
    int number=n, reverse=0, rem;
    while(n!=0){
        rem = n  % 10;
        reverse = reverse*10 +rem;
        n = n/10;
    }
    if(number == reverse)
    return 1;
    else
    return 0;
} 
int main(){

    int num;
    printf("Enter a number= ");
    scanf("%d", &num);
    
    if(palindrome(num))
    printf("Palindrome number");
    else
    printf("Not a palindrome number");

    return 0;
}