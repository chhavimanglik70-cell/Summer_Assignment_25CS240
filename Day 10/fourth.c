// Character pyramid
//       A 
//      ABA
//     ABCBA
//    ABCDCBA
//   ABCDEDCBA

#include<stdio.h>
int main(){
    int i, j, n = 5;
    char c;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n - i; j++){
            printf(" ");
        }
        for(c = 'A'; c <= 'A'+ i - 1; c++){
            printf("%c", c);
        }
        for(c ='A'+ i - 2; c >= 'A'; c--){
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}