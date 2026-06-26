// Quiz application

#include<stdio.h>
int main(){
    int ans, score=0;
    printf("Simple quiz\n\n");

    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n 2. Delhi\n 3. Lucknow\n 4. Chennai\n");
    scanf("%d", &ans);

    if(ans == 2)
    score++;

    printf("Q2. Who discovered C language?\n");
    printf("1. Dennis Ritchie\n 2. Guido van Rossum\n 3. Bjarne Stroustrup\n 4. James Gosling\n");
    scanf("%d", &ans);

        if(ans == 1)
    score++;

    printf("\n Your score= %d/2\n", score);

    return 0;
}