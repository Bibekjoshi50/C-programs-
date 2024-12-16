#include<stdio.h>
int main(){
    int a=10,b=20,c;
printf("Before swapping a=%d and b=%d\n",a,b);
c=a;
a=b;
b=c;
printf("After swapping a=%d and b=%d\n",a,b);
return 0;
}