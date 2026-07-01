// Mini project using arrays, strings and functions(Student management system)

#include<stdio.h>
struct Student{
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s[], int n){
    int i;
    printf("\nStudent Details\n");
     for(i=0; i<n; i++){
             printf("\nRoll no=%d\n", s[i].roll);
              printf("Name= %s\n", s[i].name);
               printf("Marks= %.2f\n", s[i].marks);
        }
    }

int main(){
    struct Student s[10];
    int n, i;

       printf("Enter number of students=");
        scanf(" %d", &n);

        for(i=0; i<n; i++){
            printf("\nStudent %d\n", i+1);

            printf("Enter roll no= ");
            scanf("%d", &s[i].roll);

            printf("Enter name= ");
            scanf(" %[^\n]", s[i].name);
            
            printf("Enter marks= ");
            scanf("%f", &s[i].marks);
        }
        display(s, n);
     return 0;
}