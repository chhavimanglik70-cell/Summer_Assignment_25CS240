// Ticket booking system

#include<stdio.h>
int main(){
    int seats=50, booked;
    printf("Total seats available= %d\n", seats);
    printf("Enter number of tickets to book= ");
    scanf("%d", &booked);

    if(booked <= seats){
        seats = seats - booked;
        printf("Booking successful\n");
        printf("Remaining seats= %d\n", seats);
    }
    else
    printf("Not enough seats available");

    return 0;
}