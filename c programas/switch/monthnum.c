#include<stdio.h>
int main(){
    int n;
    printf("Enter any Number\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
    printf("january-31");
        break;
    case 2:
    printf("february-28/29");
    break;

    case 3:
    printf("March-31");
    break;

    case 4 :
    printf("april-30");
    break;

    case 5:
    printf("May -31");
    break;

    case 6:
    printf("June-30");
    break;

    case 7:
    printf("July-31");
    break;
     
     case 8:
     printf("August-32");
     break;

    case 9:
    printf("september-30");
    break;

    case 10:
    printf("October");
    break;

    case 11:
    printf("November");
    break;

    case 12:
    printf("December");
    break;
    
    
    default:
       printf("Invalid Input");
    }
    return 0;
}