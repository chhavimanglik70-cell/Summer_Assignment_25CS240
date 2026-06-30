// Library management system

#include<stdio.h>
#include<string.h>

    struct Book{
    int id;
    char title[50], author[50];
};
int main(){
    struct Book b[10];
    int n, i;

    printf("Enter number of books= ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("\n Book %d\n", i+1);
        printf("Enter Book ID= ");
        scanf("%d", &b[i].id);

        printf("Enter title= ");
        scanf(" %[^\n]", b[i].title);

        printf("Enter author= ");
        scanf(" %[^\n]", b[i].author);
    }
    printf("\n Library Records \n");
    for(i=0; i<n; i++){
        printf("\nID= %d", b[i].id);
        printf("\nTitle= %s", b[i].title);
        printf("\nAuthor= %s\n", b[i].author);
    }
    return 0;
}