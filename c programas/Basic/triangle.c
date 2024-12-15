#include<stdio.h>
int main(){
    float area ,base ,height;
    printf("enter base \n");
    scanf("%f",&base);
    printf("enter height \n");
    scanf("%f",&height);
    area =0.5*base*height;
    printf("area of triangle =%f",area);
    return 0;
}