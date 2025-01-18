#include<stdio.h>
int main(){
    int p,n;
    float r,si;
    printf("Enter vales of prncipal(p),time(n), rate(r) : ");
    scanf("%d  %d  %f",&p,&n,&r);
    si =p * n * r /100;
    printf("The simple interest is : %f\n",si);
    
}