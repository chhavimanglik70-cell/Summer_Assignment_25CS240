// Column wise sum 


#include<stdio.h>
int main(){
    int r, c, i, j;
    printf("Enter rows and columns of matrix= ");
    scanf("%d %d", &r, &c);

        int a[r][c];
    printf("Enter elements of matrix= ");
    for(i=0; i<r; i++)
    for(j=0; j<c; j++)
    scanf("%d", &a[i][j]);

    for(j=0; j<c; j++){
        int sum = 0;
        for(i=0; i<r; i++)
    sum = sum + a[i][j];

printf("Sum of column %d = %d\n", j+1, sum);
}
return 0; 
}