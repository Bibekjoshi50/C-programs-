              // Character	ASCII Value Range
                                               // Uppercase (A-Z)	65 to 90
                                               // Lowercase (a-z)	97 to 122
                                               // Digits (0-9)	48 to 57
                                               // Others (Special)	Varies
   
      
      #include<stdio.h>
#include<string.h>
int main(){
    char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
      if (ch >= 65 && ch <= 90)
    {
        printf("Uppercase");
    }
    else{
        printf("lowercase");
    }
    return 0;
    
}