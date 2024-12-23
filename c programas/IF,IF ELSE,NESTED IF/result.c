#include<stdio.h>
int main(){
    float p;
    printf("enter your percent \n");
    scanf("%f",&p);
    if (p<=100&&p>=60)
    {
        printf("First Division");
    }
    if (p<60&&p>=45)
    {
        printf("Second Division");
    }
    if (p<45&&p>=33)
    {
      printf("Third Division");
    }
    if (p<33)
    {
        printf("fail");
    }
    return 0;
    
}