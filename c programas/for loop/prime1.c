#include<stdio.h>
int main(){
    int n,m,num;
    printf("Enter any number up to you want to print prime number \n");
    scanf("%d",&num);
    printf("Prime number between 1 and %d is given below\n",num);
    for (int i = 1; i <= num; i++)
    {
        n= i,m=0;
        for (int  j = 2; j <= n-1; j++)
        {
            if(n%j==0)
            {
                if(n%j==0)
                
                {
                    m=1;
                    break;
                }
            }
        }
        if(m==0)
        printf("%d\n",n);

    }
    return 0;
    
}