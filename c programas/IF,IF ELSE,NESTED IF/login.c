#include<stdio.h>
#include<string.h>
int main(){
    char username[200]="bebikjoshi118@gmail.com",p[200]="12345";
    char u1[200],p1[200];
    printf("Enter the username\n");
    scanf("%s",u1);
    printf("Enter your password\n");
    scanf("%s",p1);
    if (strcmp(username,u1)==0 && strcmp(p,p1)==0)

    {
       printf("login successful\n");

    }
    else{
        printf("You entered wrong password\n");
    }
    return 0;
    
}