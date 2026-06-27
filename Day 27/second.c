// Employee management system


#include<stdio.h>
struct Employee{
    int id;
    char name[50];
    float salary;
};
int main(){
    struct Employee e[5];
    int n, i;

    printf("Enter number of employees= ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("\nEmployee %d\n", i+1);
        printf("Enter ID= ");
        scanf("%d", &e[i].id);

        printf("Enter name= ");
        scanf("%s", e[i].name);

        printf("Enter salary= ");
        scanf("%f", &e[i].salary);
    }
    printf("\n Employees Records \n");
    for(i=0; i<n; i++){
        printf("ID= %d\n", e[i].id);
        printf("Name= %s\n", e[i].name);
        printf("Salary= %.2f\n\n", e[i].salary);
    }
    return 0;
}