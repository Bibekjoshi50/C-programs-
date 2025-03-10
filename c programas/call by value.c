

#include <stdio.h>
void interchange(int num1, int num2)

{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	
}
int main()

{
	int a = 100;
	int b = 200;
	
	printf ("Before swap , value of a : %d\n",a);
	
printf ("Before swap , value of b : %d\n",b);
interchange(a,b); 
printf("After swap , value of a : %d\n",a);
printf("After swap, value of b: %d\n",b);
return 0;

}




