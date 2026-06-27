// Student record management system

#include<stdio.h>
struct Student{
    int roll;
    char name[50];
    float marks;
};
int main(){
    struct Student s[5];
    int n, i;

    printf("Enter number of students= ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("\nStudent %d\n", i+1);
        printf("Enter roll no.= ");
        scanf("%d", &s[i].roll);

        printf("Enter name= ");
        scanf("%s", s[i].name);

        printf("Enter marks= ");
        scanf("%f", &s[i].marks);
    }
    printf("\n Student Records \n");
    for(i=0; i<n; i++){
        printf("Roll= %d\n", s[i].roll);
        printf("Name= %s\n", s[i].name);
        printf("Marks= %.2f\n\n", s[i].marks);
    }
    return 0;
}