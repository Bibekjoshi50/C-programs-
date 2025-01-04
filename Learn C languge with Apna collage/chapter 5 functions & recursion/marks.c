#include<stdio.h>


int calcPercentage(int science, int math, int sanskrit);

int main(){
    int sc= 92;
    int math= 80;
    int sanskrit = 76;
    printf("percentatge is : %d", calcPercentage(sc, math, sanskrit));
    return 0;
}

int calcPercentage(int science, int math, int sanskrit){
    return ((science+ math + sanskrit)/3);
}