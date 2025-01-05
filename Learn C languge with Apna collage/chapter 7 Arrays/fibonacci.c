#include<stdio.h>

int main(){
 int n;
 printf("Enter n(n>2) : ");
 scanf("%d",&n);

if (n<=2)
{
  printf(" please enter a number greater thean 3\n");
  return 1;
}


int fib[n];
fib[0]=0;
fib[1]=1;
return 0;


printf("%d\n", fib[0]);



for (int i=2; i<n; i++){
    fib[i]=fib[i-1]+fib[i-2];
    printf("%d\n",fib[i]);
}
 
}