#include<stdio.h>
int main(){
    int n,m,i,j,flag;
    printf("Enter the starting number= ");
    scanf("%d",&n);
    printf("Enter the ending number= ");
    scanf("%d",&m);
    printf("Prime numbers between %d and %d are= ",n,m);

    for(i=n; i<=m;i++){
        if(i<=1)
        continue;
        flag=1;
        for(j=2;j*j<=i;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag)
        printf("%d\n",i);
    }
    return 0;
}