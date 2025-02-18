#include<stdio.h>
int main(){
    int age;
    printf("Welcomt to    c programming .\nPlease enter your age: ");
    scanf("%d", &age);

    if(age<20){
        printf("you are eligible for doing love marriage\n");
    }
    printf("your current age is: %d", age);
    return 0;
}