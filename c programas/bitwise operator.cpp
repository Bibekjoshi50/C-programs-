
#include<stdio.h>
int main(){
	int a =5 , b=3,c;
	c=a&b;
	printf("a&b =%d\n",c);
	c =a|b;
	printf("a|b=%d\n",c);
	c=a>>2;
	printf("a>>2=%d\n",c);
	c=a<<2;
	printf("a<<2=%d\n",c);
	return 0;
}
