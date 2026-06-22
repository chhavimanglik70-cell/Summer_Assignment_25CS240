// Remove spaces from string


#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    int i, j= 0;
    printf("Enter a string= ");
    fgets(str, sizeof(str), stdin);

    for(i=0; str[i] != '\0'; i++){
        if(str[i] != ' '){
        str[j] = str[i];
        j++;
    }
}
    str[j] = '\0';
    printf("New string= %s", str);
    return 0;
}