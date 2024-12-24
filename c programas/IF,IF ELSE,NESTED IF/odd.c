#include<stdio.h>

int main(){
    int n;
    printf("Enter any Number \n");
    scanf("%d", &n);

    if(n % 2 == 0) {  
        printf("Number is Even");
    } else {
        printf("Number is Odd");
    }

    return 0;
}
