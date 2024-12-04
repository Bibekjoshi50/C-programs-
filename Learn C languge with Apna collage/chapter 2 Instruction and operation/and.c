#include<stdio.h>
#include<math.h>

int main(){
    int isSunday = 1;   // 'isSunday' is assigned the value 1 (true).
    int isSnowing = 1;  // 'isSnowing' is assigned the value 1 (true).
    
    // The logical AND (&&) operator checks if both conditions are true.
    printf("%d\n", isSunday && isSnowing);
    
    return 0;
}
