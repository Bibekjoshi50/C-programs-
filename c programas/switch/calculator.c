#include<stdio.h>
int main(){

    float x,y;
    char ch;
    printf("enter first number\n");
    scanf("%f",&x);
    printf("enter second number\n");
    scanf("%f",&y);
    
    getchar();

    printf("enter \n+ for add\n- for sub\n*for multiply\n/for divide\n");
    scanf("%c",&ch);
    switch (ch)
    {

    case '+':
    printf("Addition  =%f", (x + y));
    break;

    case '-':
    printf("subtraction=%f",(x - y));
    break;

    case '*':
    printf("multiplication=%f", (x*y));
    break;

case '/':
printf("division=%f",(x/y));
break;

default:
printf("Invalid Input ");
printf("Please enter valid input");

    }
return 0;
}