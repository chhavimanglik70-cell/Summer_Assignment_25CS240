// Find the largest prime factor

#include<stdio.h>
int main(){
    int n, i, j, fact, largest=-1;
    printf("Enter a number= ");
    scanf("%d",&n);
    for(i=2; i<=n; i++){
        if(n % i == 0){
            fact=1;
            for(j=2; j<=i/2; j++){
                if(i % j == 0){
                    fact=0;
                    break;
                }
            }
            if(fact){
                largest=i;
            }
        }
    }
    printf("Largest Prime factor= %d", largest);
    return 0;

}