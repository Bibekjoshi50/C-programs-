#include<stdio.h>
int main(){
    int no,b;
    printf("enter any number \n");
    scanf("%d",&no);
    printf("Reverse is given below \n");
    while (no!=0)
    {
        b=no%10;
        printf("%d",b);
        no = no/10;
    }
    return 0;
    
}