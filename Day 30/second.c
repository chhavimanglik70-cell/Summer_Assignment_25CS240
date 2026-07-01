// Mini library system

#include<stdio.h>
struct Book{
    int id;
    char title[50];
};

int main(){
    struct Book b[10];
    int n, i;

       printf("Enter number of books=");
        scanf(" %d", &n);

        for(i=0; i<n; i++){
            printf("\nBook %d\n", i+1);

            printf("Enter Book id= ");
            scanf("%d", &b[i].id);

            printf("Enter Book title= ");
            scanf(" %[^\n]", b[i].title);
        }

        printf("\n Library Records\n");
        for(i=0; i<n; i++){
             printf("\nID=%d\n", b[i].id);
              printf("Title= %s\n", b[i].title);
        }
     return 0;
}