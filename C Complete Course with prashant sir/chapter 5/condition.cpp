#include<stdio.h>
int main(){
//	printf("Hello world");
int age;
printf("Welcoem to ARTO.\nPlease enter your age: ");
scanf("%d",&age);

if (age >18)
{
	printf("You are too young ,please apply after you are 18\n");
	}else if(age>70){
		printf("you are senior , you cannot apply anymore \n ");
		}else{
		printf("you are eligible for a license.\n");
			
		}
		printf("your age is:%d",age);
		return 0;
	}



