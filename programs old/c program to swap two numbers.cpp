//c program to swap two numbers 
#include<stdio.h>
int main()
{
int a,b,temp;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("%d %d",a,b);
return 0;
}
