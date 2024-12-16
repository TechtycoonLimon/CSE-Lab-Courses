#include <stdio.h>

int fibonacci(int n); 

int main() {
    int n;

    printf("Enter the nth term: ");
    scanf("%d", &n);

    int nth_term = fibonacci(n);// function call.

    printf("The %dth term of the Fibonacci sequence is: %d\n", n, nth_term);

    return 0;
}
//function definition.
int fibonacci(int n) {
    if (n <= 1) {
        return n;  // Base cases: F(0) = 0, F(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive formula: F(n) = F(n-1) + F(n-2)
    }
}
