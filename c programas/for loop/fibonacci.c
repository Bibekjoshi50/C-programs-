#include<stdio.h>
int main(){
    int no,a,b=1,c=0;
    printf("Enter any number up to you want to print fabonacci series ");
    scanf("%d",&no);
    for (int  i = 1 ; i <= no; i++)
    {
        printf("%d",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
    
}