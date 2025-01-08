#include<stdio.h>
int main(){
FILE *fptr;
fptr = fopen("bibek.txt","w");

if(fptr == NULL){
    printf("File doesnt exists\n");

}
else{
    fclose(fptr);
}
 

return 0;


}