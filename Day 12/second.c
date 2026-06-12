// Function for Armstrong number

#include<stdio.h>
#include<math.h>
int armstrong(int n){
    int number=n, temp=n, digits=0, rem, sum=0;
    while(temp != 0){
        digits++;
        temp = temp/10;
    }
    temp = n;
    while(temp != 0){
        rem = temp % 10;
        sum = sum + pow(rem, digits);
        temp = temp/10;
    }
    if(sum == number)
    return 1;
    else
    return 0;
}

int main(){
    int num;
    printf("Enter a number= ");
    scanf("%d", &num);

    if(armstrong(num))
    printf("Armstrong  number");
    else
    printf("Not an armstrong number");
    
    return 0;
}