// Menu-driven string operations system

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int choice;

       printf("Enter a string=");
        scanf(" %[^\n]", str);

        printf("\n1. Find length\n");
        printf("2. Convert to uppercase\n");
        printf("3. Reverse string\n");
       
           printf("Enter choice=");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            printf("Length= %lu\n", strlen(str));
            break;
            
               case 2:{
               	int i;
    for(i=0; str[i] != '\0'; i++){
    if(str[i] >= 'a' && str[i] <= 'z')
    str[i] = str[i] - 32;
                }
     printf("Uppercase string = %s\n", str);
                 break;
}

               case 3:{
                int len = strlen(str);
                int i;
                printf("Reversed string= ");
    for(i=len-1; i>=0; i--)
       printf("%c", str[i]);
       printf("\n");
            break;
               }

            default:
            printf("Invalid choice\n");
        }
     return 0;
}