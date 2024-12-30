#include<stdio.h>
int main(){
    int no1,no2,i,hcf;
    printf("Enter the first number :");
    scanf("%d",&no1);
    printf("Enter the second numbee :");
    scanf("%d",&no2);
    for (int  i = 1; i <= no1 && i<= no2; i++)
    {
        if (no1 %  i == 0 && no2 % i==0)
        {
           hcf = i;
        }
        
    }
    printf("HCF of %d  and %d is %d\n",no1,no2,hcf);
    return 0;
}