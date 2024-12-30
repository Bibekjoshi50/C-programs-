#include<stdio.h>
int main(){
    int b,p,f=1;
    printf("Enter base\n");
    scanf("%d",&b);
    printf("Enter power \n");
    scanf("%d",&p);
    for (int i = 1; i <=p; i++)
    {
        f = f*b;
    }
    printf(" Result = %d",f);
    return 0;
    
}