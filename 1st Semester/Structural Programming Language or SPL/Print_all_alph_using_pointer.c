#include <stdio.h>

int main() {
    char ch = 'A'; // Starting character (lowercase 'a')
    char *ptr = &ch; // Pointer to the character

    printf("The Alphabets are: \n");

    // Loop to print uppercase letters (A-Z)
    for (int i = 0; i < 26; i++) {
        printf("%c ", *ptr); // Print the character pointed to by ptr
        (*ptr)++; // Increment the character value (uppercase)
    }

    // Reset the pointer to the starting character
    ptr = &ch;

    // Loop to print lowercase letters (a-z) (optional)
   
    for (int i = 0; i < 26; i++) {
        printf("%c ", *ptr); // Print the character pointed to by ptr
        ptr++; // Increment the character value (lowercase)
    }

     
    return 0;
}
