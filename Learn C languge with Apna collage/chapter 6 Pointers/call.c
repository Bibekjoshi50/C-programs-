#include<stdio.h>

void square(int n);  // Function declaration

int main() {
    int number = 4;
    square(number);  // Call the function
    printf("number = %d\n", number);  // The value of `number` remains unchanged
    return 0;
}

void square(int n) {  // Correct function definition
    n = n * n;  // Calculate the square of the number
    printf("square = %d\n", n);
}
