#include<stdio.h>
int main(){
    int area,h,w;
    printf("Enter height of rectangle \n");
    scanf("%d",&h);
    printf("Enter width of rectangel \n");
    scanf("%d",&w);
    area =h*w;
    printf("Area of rectangle =%d", area);
    return 0;
}