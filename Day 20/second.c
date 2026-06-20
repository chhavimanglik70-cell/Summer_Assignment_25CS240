// Check symmetric matrix

#include<stdio.h>
int main(){
    int n, i, j, flag=1;
    printf("Enter order of matrix= ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter the elements of the matrix= ");
    for(i=0; i<n; i++)
    for(j=0; j<n; j++)
  scanf("%d", &a[j][i]);

        for(i=0; i<n; i++){
    for(j=0; j<n; j++){
  if(a[i][j] != a[j][i]){
    flag = 0;
    break;
  }
}
        }
        if(flag)
        printf("Symmetric matrix");
        else
         printf("Not Symmetric matrix");

    return 0;

}