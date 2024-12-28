#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character\n");
    scanf("%c",&ch);
    switch (ch)
    {
        case 'a':
        printf("vowel");
        break;

        case 'e':
        printf("Vowel");
        break;

        case 'i':
        printf("vowel");
        break;

        case '0':
        printf("vowel");
        break;

        case 'u':
        printf("vowel");
        break;

        default:
        printf("constant");

    }
    return 0;
}