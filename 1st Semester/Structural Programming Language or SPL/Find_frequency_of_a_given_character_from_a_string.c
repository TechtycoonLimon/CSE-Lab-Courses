#include <stdio.h>

int main() {
    char str[100];  // Array to store the string
    char ch;        // Character to find the frequency of
    int count = 0;  // To store the frequency

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read the string with fgets to handle spaces

    printf("Enter the character to find its frequency: ");
    scanf(" %c", &ch);  // Read the character with a space before %c to avoid issues

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;  // Increment the count if the character is found
        }
    }

    if (count > 0) {
        printf("Frequency of '%c' in the string: %d\n", ch, count);
    } else {
        printf("The character '%c' is not found in the string.\n", ch);
    }

    return 0;
}
