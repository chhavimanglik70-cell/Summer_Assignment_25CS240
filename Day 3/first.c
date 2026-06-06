// Check whether a number is prime

#include<stdio.h>
int main(){
	int n,flag=0,i;
	printf("Enter number= ");
	scanf("%d",&n);
	for(i=2; i*i<=n; i++){
	if(n % i == 0){
		flag=1;
		break;
	}}
		 if(n==1||flag==1){
	printf("The number is not prime");}
	else{
		printf("The number is prime");
	}
	return 0;
}
