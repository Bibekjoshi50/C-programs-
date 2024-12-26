//calculate profit and loss 
#include<stdio.h>
#include<string.h>
int main()
{
	float sp,cp,profit,loss;
	printf("Enter cost price\n");
	scanf("%f",&cp);
	printf("Enter selling price\n");
	scanf("%f",&sp);
	if(sp>cp){
		profit = sp-cp;
		printf("profit is %f rupee",profit);
	}
	else{
		loss = cp-sp;
		printf("loss is %f rupee", loss);
	}
return 0;
}
