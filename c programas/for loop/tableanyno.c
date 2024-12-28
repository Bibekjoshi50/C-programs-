#include<stdint.h>
int main(){
    int no;
    printf("Enter any number\n");
    scanf("%d", &no);
for (int i = 1; i <=10; i++)
{
    printf("%d\n",i*no);
}
return 0;
}