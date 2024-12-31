#include<stdio.h>
void printNameste();
void printbonjour();

int main(){
    printf("enter f for french & i for indian : ");
    char ch;
    scanf("%c",&ch);
    if (ch == 'i')
    {
       printNameste();
    }
    else if (ch =='f') {
        printbonjour();
    }
    else{
        printf("Invalid input\n");
    }
    
    return 0;
}

void printNameste(){
    printf("Nameste\n");
}

void printbonjour(){
    printf("bonjour\n");
}