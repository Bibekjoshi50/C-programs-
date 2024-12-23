#include<stdio.h>
int main(){
    int no;
    printf("Enter any Number\n");
    scanf("%d",&no);
    if (no>0)
    {
        printf("no is positive");
    }
    if (no<0)
    {
      printf("no is negative");
    }
    
    if (no==0)
    {
       printf(" no is zero");
    }
    
}