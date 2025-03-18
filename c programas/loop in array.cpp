# include<stdio.h>
int main(){
	int a[3] [3] ={{40,5,60} ,{10,20,30} ,{70,80,90}};
	
	for (int i =0; i<=2; i++)
	{
		
	for (int j =0; j<=2; j++)
	{
		printf("%d\n" ,a[i][j]);
		
	}
	printf("\n");
	
}
return 0;
}
