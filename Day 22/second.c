// Count words in a sentence

#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    int i, count = 1;
    printf("Enter a sentence= ");
    fgets(str, sizeof(str), stdin);

    for(i=0; str[i] != '\0'; i++){
        if(str[i] == ' ')
        count++;
    }
    printf("Number of words in the sentence= %d", count);
    return 0;
}