// Print Armstrong numbers in a range

#include<stdio.h>
#include<math.h>
int main(){
int a,b,n,temp,digit,digits,sum;
printf("Enter first and last number= ");
scanf("%d %d",&a,&b);
printf("Armstrong numbers are= \n");
for(n = a; n<=b; n++){
    temp = n;
    digits = 0;
    sum = 0;
    while(temp!=0){
        digits++;
        temp= temp/10;
    }
    temp = n;
    while(temp!=0){
        digit = temp % 10;
        sum = sum + pow(digit, digits);
        temp = temp/10;
    }
    if(sum == n){
        printf("%d", n);
    }
}
return 0;
}