#include<stdio.h>
int main(){
    int no,sum=0;
    printf("Enter any Number\n");
    scanf("%d",&no);
    printf("Natural number from 1 to %d is given below \n",no);
    for (int i = 1; i <=no; i++)
    {
        printf("%d",i);
        sum =sum+i;

    }
    printf("\nTotal sum =%d",sum);
    return 0;
    
}