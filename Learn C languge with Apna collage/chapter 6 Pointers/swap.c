#include<stdio.h>


// call by value/

void swap(int a, int b);

int main(){

    int x= 3, y= 5;
    swap (x,y);
    printf("x= %d & y = %d\n",x,y);
    return 0;
}

void swap( int a, int b){
    int t = a;
    a= b;
    b=a;
    printf(" a= %d & b =%d\n",a,b);
}