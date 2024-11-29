#include<stdio.h>
#include<conio.h>
int fun();
int disp();
int a;
int main()
{
	printf("%d\n",a);  
	a=20; 
	fun();
	disp();
	return 0;
}
int fun()
{
	printf("%d\n",a);
	return 0;
}
int disp()
{
	printf("%d\n",a);
	return 0;
}

