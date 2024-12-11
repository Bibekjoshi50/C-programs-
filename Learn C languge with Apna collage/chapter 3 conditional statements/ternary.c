#include<stdio.h>
int main(){
    int age ;
    printf("enter age : ");
    scanf ("%d",&age);
    age >= 18 ? printf("adult\n") : printf ("Not adult \n");
    return 0;
}