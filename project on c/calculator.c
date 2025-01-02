#include<stdio.h>
int main(){
double num1, num2;
char operator;
printf("Enter first number: ");
scanf("%lf",&num1);

printf("Enter an operator  (+,-,*,/):");
scanf("%c",&operator);

printf("Enter second number : ");
scanf("%lf",&num2);

switch (operator)
{
case '+':
printf("Result: %.2lf\n",num1 + num2");
    break;

    case '-':
    printf("Result : %2lf\n",num1 - num2);
    break;

    case '*':
    printf("Result: %.2lf\n",num1*num2);
    break;

    case '/':
    printf("Result: %2lf\n",num1,num2);
    break;




default:
printf("Invalid operator ! please enter  +,-,*,/\n");
    break;
}
return 0;
}