#include<stdio.h>
int main(){
    int no,m=0;
    printf("Enter any number \n");
    scanf("%d",&no);
    for (int  i = 2; i <no; i++)
    {
       if (no%i == 0)
       {
       printf("Number is not prime");
       m=1;
       break;
       }
       
    }
    if (m==0)
    printf("Number is prime");
return 0;
    
    
}