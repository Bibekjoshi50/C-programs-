#include<stdio.h>
int factorial(int);
int main()
{
    int fact,n;
    printf("Enter any non-Negative NUmber\n");
    scanf("%d",&n);
    fact=factorial(n);
    printf("%d is the Factotrial of %d \n",fact,n);
    return 0;
}
int factorial(int n)
{
    if(n==0)
    {
        return 1;

    }
    else
    {
        return (n*factorial(n-1));
    }
}
