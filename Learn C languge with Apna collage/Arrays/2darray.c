#include<stdio.h>


void storeTable(int arr[] [10], int n, int m, int number);

int main(){
int tables[2][10];
storeTable(tables, 0, 10, 2);
storeTable(tables, 0, 10, 2);
return 0;
}

void storeTable( int arr[] [10], int n, int m, int number){

for (int i=0; i<m; i++){

    arr[n] [m] = number *(i+1);
}


printf("\n");
  for ( int  i = 0; i < 10; i++)
  {
    printf("%d\t", tables[1][i]);
  }
  

}