#include<stdio.h>
int main(){
    int no,f=1;
    printf("Enter any number\n");
    scanf("%d",&no);
    printf("Factor is given below\n");
    for (int  i = 1; i <= no; i++)
    {
        if (no %i==0)
        {
          printf("%d\n",i);
        }
        
    }
    return 0;
    
}