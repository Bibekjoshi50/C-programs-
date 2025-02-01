#include<stdio.h>
int main(){
	float cost=200, down_payment=100, installment =100 , months=21;
    float total_paid = down_payment + (installment * months);
	float interest = total_paid-cost;
	float monthly_interest = interest /months;
	
	printf("monthly Interest charged : Rs. % .2f\n",monthly_interest);
	return 0;
}
