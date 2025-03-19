#include<stdio.h>
#include<math.h>
int main(){
	int n,a[100],i, sum=0;
	printf("Enter number of elements");
	scanf("%d",&n);
	printf("Enter %d numbers",n);
	for (i =0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0; i<n; i++)
	{
		sum=sum+pow(a[i],2);
	}
	printf("sum of square of number =%d",sum);
	return 0;
}
