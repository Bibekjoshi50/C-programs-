#include<stdio.h>
int main(){
    int no;
    printf("Enter any number \n");
    scanf("%d",&no);
    switch (no)
    {
    case 1:
    printf("monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("wednesday");
        break;
        case 4:
        printf("Thusday");
        break;
        case 5:
        printf("friday");
        break;
        case 6:
        printf("saturday");
        break;
        case 7:
        printf("sunday");
        break;
    default:
      printf("Invalid Input");
    }
}