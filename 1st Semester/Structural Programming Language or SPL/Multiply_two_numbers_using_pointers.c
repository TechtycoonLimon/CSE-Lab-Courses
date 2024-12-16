#include <stdio.h>

int main() {
    int num1, num2, product;
    int *ptr1, *ptr2;

    // Get the two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Declare a pointer variable
    

    // Assign memory addresses of num1 and num2 to pointers
    ptr1 = &num1;
    ptr2 = &num2;

    // Multiply the values pointed to by the pointers and store in product
    product = (*ptr1) * (*ptr2);

    // Print the product
    printf("Product of %d and %d is: %d\n", num1, num2, product);

    return 0;
}
