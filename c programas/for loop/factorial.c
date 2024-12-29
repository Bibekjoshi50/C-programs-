#include<stdio.h>
int main(){
int no,f=1;
    printf("Enter any number\n");
    scanf("%d",&no);
    for (int i= 1; i<=no; i++)
    {
        f=f*i;
    }
    printf("Factorial =%d",f);
    return 0;

}