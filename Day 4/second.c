    // Calculate nth Fibonacci number
    
    #include<stdio.h>
int main(){
    int n,i,a=0,b=1,c;
    printf("Enter n= ");
    scanf("%d",&n);
    if(n == 0)
        printf("nth Fibonacci number= ",a) ;
        else if(n==1)
            printf("nth Fibonacci number= ",b);
        else{
            for(i=2; i<=n; i++){
                c=a+b;
                a=b;
                b=c;
            }
            printf("nth Fibonacci number=%d ",b);
        }
        return 0;
    }
