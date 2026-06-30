// Contact management system

#include<stdio.h>

struct Contact{
    char name[50], phone[15];
};
int main(){
    struct Contact c[10];
    int n, i;

    printf("Enter number of contacts= ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("\nContact %d\n", i+1);

        printf("Enter name= ");
        scanf(" %[^\n]", c[i].name);

        printf("Enter phone number= ");
        scanf("%s", c[i].phone);
    }
    printf("\n Contact List \n");
    for(i=0; i<n; i++){
        printf("\nName= %s", c[i].name);
        printf("\nPhone= %s\n", c[i].phone);
    }
    return 0;
}