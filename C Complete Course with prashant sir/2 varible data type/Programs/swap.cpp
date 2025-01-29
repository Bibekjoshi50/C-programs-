#include<stdio.h>
int main(){
	
	int a,b ,c;
	 printf("Please enter the first number: ");
	 scanf("%d ",&a);
	 
	 printf("Now ,enter the second number: ");
	 scanf("%d",&b);
	
	
	c = a;
	a = b;
	b = c;
	
	printf("The value of fist value  is %d  and second is %d", a ,b );
	return 0;
	
}
