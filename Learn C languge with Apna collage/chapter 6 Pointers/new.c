#include<stdio.h>
int main(){
    int age = 20;
    int *ptr = &age;

    printf("%p\n",&age);
     printf("%u\n",ptr);
         printf("%u\n",&ptr);
    return 0;
}