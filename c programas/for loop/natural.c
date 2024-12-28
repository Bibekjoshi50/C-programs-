#include<stdio.h>
int main(){
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    printf("Natural number from 1 to %d is given below \n",n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}