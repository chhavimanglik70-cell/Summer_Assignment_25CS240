// Salary management system


#include<stdio.h>
struct Salary{
    int empID;
    char name[50];
    float basic, hra, da, gross;
};
int main(){
    struct Salary s[5];
    int n, i;

    printf("Enter number of employees= ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("\nEmployee %d\n", i+1);
        printf("Enter Employee ID= ");
        scanf("%d", &s[i].empID);

        printf("Enter name= ");
        scanf("%s", s[i].name);

        printf("Enter basic salary= ");
        scanf("%f", &s[i].basic);
    
        s[i].hra = 0.20 * s[i].basic;
         s[i].da = 0.10 * s[i].basic;
        s[i].gross = s[i].basic + s[i].hra + s[i].da;
       }
    printf("\n Salary details \n");
    for(i=0; i<n; i++){
        printf("ID= %d\n", s[i].empID);
        printf("Name= %s\n", s[i].name);
        printf("Basic salary= %.2f\n", s[i].basic);
          printf("HRA= %.2f\n", s[i].hra);
            printf("DA= %.2f\n", s[i].da);
              printf("Gross salary= %.2f\n\n", s[i].gross);
    }
    return 0;
}