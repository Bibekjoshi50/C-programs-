#include<stdio.h>
int main(){
    int no;
    printf("enter any number\n");
    scanf("%d",&no);
    printf("Natural Number from 1 to %d in reverse order is given below\n",no);
    for (int i = no; i >=1 ; i--)
    {
       printf("%d",i);
    }
    return 0;
}