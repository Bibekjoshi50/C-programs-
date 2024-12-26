#include<stdio.h>
int main(){
	char ch;
	printf("enter any character \n");
	scanf("%c",&ch);
	if(ch>65&&ch<=97 || 
	(ch>=97&&ch<=122))
	{
		printf("It is an alphabet");
	}
	else if(ch >=48&&ch<=57)
	{
		printf("It is digit");
	}
	else 
	{
		print("It is special symbol");
	}
	return 0;
}
