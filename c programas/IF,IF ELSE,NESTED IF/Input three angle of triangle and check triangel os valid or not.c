#include<stdio.h>
#include<conio.h>
int main(){
	float a1,a2,a3;
	printf("enter first angle \n");
	scanf("%f",&a1);
	printf("Enter second angle\n");
	scanf("%f",&a2);
	printf("enter third angle\n");
	scanf("%f",&a3);
	if (a1 > 0 && a2 > 0 && a3 > 0 && (a1 + a2 + a3) == 180)
	{
		printf("Triangle is valid");
	}
	else{
		printf("Triangle is not valid");
	}
	return 0;
	
	
}
