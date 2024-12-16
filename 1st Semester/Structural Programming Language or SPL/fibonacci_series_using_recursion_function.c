#include<stdio.h>
int fibonacci(int n);

int main() {
    printf("The fib is = %d", fibonacci(6));
    return 0;
}

int fibonacci(int n) {
    if (n == 0){ 
        return 0;
    } 
    if (n == 1) {
        return 1;
    }
    
    int fib_of_n_minus_one = fibonacci(n-1);
    int fib_of_n_minus_two = fibonacci(n-2);
    int fibonacci = fib_of_n_minus_one + fib_of_n_minus_two;
    return fibonacci;
}