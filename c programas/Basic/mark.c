#include<stdio.h>
int main(){
    float p,c,m,h,e,avg;
    printf("enter marks in physic\n");
    scanf("%f",&p);
    printf("enter marks in chemistry \n");
    scanf("%f",&c);
    printf("enter marks in math\n");
    scanf("%f",&m);
    printf("enter marks in health\n");
    scanf("%f",&h);
    printf("enter marks in english \n");
    scanf("%f",&e);
    avg=(p+c+m+h+e)/5;
    printf("Average of result =%f",avg);
    return 0;

}