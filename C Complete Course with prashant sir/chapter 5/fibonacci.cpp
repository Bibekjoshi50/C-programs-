#include <stdio.h>

// Function to generate the nth Fibonacci term
int fibonacci(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;

    int a = 0, b = 1, fib;
    for (int i = 3; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0;  // 0 and 1 are not prime numbers

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // Not a prime number
    }
    return 1; // Prime number
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int nthFib = fibonacci(n); // Get the nth Fibonacci term
    printf("The %dth Fibonacci term is: %d\n", n, nthFib);

    // Check if it's prime
    if (isPrime(nthFib))
        printf("The %dth Fibonacci term is a prime number.\n", n);
    else
        printf("The %dth Fibonacci term is not a prime number.\n", n);

    return 0;
}

