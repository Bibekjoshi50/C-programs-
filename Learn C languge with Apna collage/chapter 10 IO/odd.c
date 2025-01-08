#include<stdio.h>

int main(){

    FILE *fptr;
    fptr =fopen ("Odd.txt","w");

    int n;
    printf("enter n : ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        fprintf(fptr ,"%d\n",i);
    }
    
fclose(fptr);
return 0;
}