#include<stdio.h>
void printHello(); // Declaration of the function
int main (){
    printHello();
    printHello();
    printHello();
    printHello();
    printHello();
    printHello(); // Function call
    return 0;
}
void printHello(){ // Function definition
    printf("Hello !\n");
}
