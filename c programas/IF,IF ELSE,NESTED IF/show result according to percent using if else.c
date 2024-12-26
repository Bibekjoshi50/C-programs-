#include<stdio.h>
int main(){
	float p;
	printf("Enter your percent \n");
	scanf("%f",&p);
	if(p>60)
	{
		printf("First Division");
		
	}
	else if 
	(p>=45) {
         printf("second division");
	}
	else if(p>=33){
		printf("Third Division");
	}
	else{
		printf("fail");
		
	}
	return 0;
}
