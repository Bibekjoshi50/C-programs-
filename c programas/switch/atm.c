#include<stdio.h>
int main(){
    float amt,creditamt,debitamt;
    char ch;
    printf("Enter Initial amount in your account\n");
    scanf("%f",&amt);
    printf("enter \nc for cradit\nd for debit\nb for balance\n");
    scanf("\n%c",&ch);
    switch (ch)
    {
        case 'c':
        printf("enter credit amount\n");
        scanf("%f",&creditamt);
        amt= amt + creditamt;
        printf("New Amoutnt = %f",amt);
        break;

        case 'd':
        printf("enter debit amount\n");
        scanf("%f",&debitamt);
        if (amt>=debitamt)
        {
            amt = amt -debitamt;
            printf("New Amount = %f",amt);
        }
        else{
            printf("Insufficient Balance");

        }
        break;
        case 'b':
       printf("Amount in your account = %f",amt);
       break;
       default:
       printf("Invalid Input");  
    }
    return 0;
}