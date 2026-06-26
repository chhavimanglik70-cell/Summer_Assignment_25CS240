// Number guessing game

#include<stdio.h>

int main(){
    int secret=25, guess;
    printf("Guess the number between 1 to 50= ");
    do{
        scanf("%d", &guess);
        if(guess > secret)
        printf("Too high! Try again.");
        else if(guess < secret)
        printf("Too low! Try again.");
        else
        printf("Congratulations! you guessed the correct number.");
    }
    while (guess != secret);
    return 0;
   
}
