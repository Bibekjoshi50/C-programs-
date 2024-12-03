#include <stdio.h>

void fun() {
    int a = 10;
    static int b = 20;
    printf("%d %d\n", a, b);
    a++;
    b++;
}

int main() {
    fun();
    fun();
    getchar(); 
    return 0;
}

