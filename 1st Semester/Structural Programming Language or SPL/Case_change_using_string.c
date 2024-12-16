#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100]; // Array to store the string
    int i; // Variable for loop iteration

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the string from the user

    printf("The original string is: %s\n", str);

    // Loop through each character of the string
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the character is lowercase
        if (islower(str[i])) {
            // Convert lowercase to uppercase using toupper()
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            // Convert uppercase to lowercase using tolower()
            str[i] = tolower(str[i]);
        }
    }

    printf("The string after case change is: %s\n", str);

    return 0;
}
