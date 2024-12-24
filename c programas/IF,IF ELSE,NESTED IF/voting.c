#include<stdio.h>
int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d",age);
    if (age>=18)
    {
        printf("you are eligible for voting");
    
    }else{
        printf("your are not eligible for voting");
    }
    return 0;
    
}