// Marksheet generation system


#include<stdio.h>
struct Student{
    int roll, m1, m2, m3, total;
    char name[50];
    float percentage;
};
int main(){
    struct Student s;

    printf("Enter roll no.= ");
    scanf("%d", &s.roll);

        printf("Enter name= ");
        scanf("%s", s.name);

        printf("Enter marks of 3 subjects= ");
        scanf("%d%d%d", &s.m1, &s.m2, &s.m3);

        s.total = s.m1 + s.m2 + s.m3;
        s.percentage = s.total / 3.0;
    
    printf("\n Marksheet \n");
        printf("Roll no.= %d\n", s.roll);
        printf("Name= %s\n", s.name);
        printf("Subject 1= %d\n", s.m1);
          printf("Subject 2= %d\n", s.m2); 
          printf("Subject 3= %d\n", s.m3);
              printf("Total= %d\n", s.total);
              printf("Perecentage= %2f%%\n", s.percentage);

              if(s.percentage >= 40)
              printf("Result= PASS\n");
              else
              printf("Result= FAIL\n");
    
    return 0;
}