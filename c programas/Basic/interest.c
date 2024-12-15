#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("Enter principle \n");
    scanf("%f",&p);
    printf("enter rate of interest\n");
    scanf("%f",&r);
    printf("enter time \n");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("simple interst =%f",si);
    return 0;
}