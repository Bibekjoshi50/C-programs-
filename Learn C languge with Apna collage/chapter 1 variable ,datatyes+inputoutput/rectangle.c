#include <stdio.h>
int main(){
float a,b,perimeter;
printf("enter the length of side a: ");
scanf("%f",&a);
printf("enter the length of side b: ");
scanf("%f",&b);
perimeter = 2*(a+b);
printf("the perimeter of the rectangel is :%.2f\n",perimeter);
return 0;
}
